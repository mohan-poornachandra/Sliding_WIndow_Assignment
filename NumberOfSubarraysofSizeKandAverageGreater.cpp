//Leetcode 1343
#include<iostream>
#include<vector>
using namespace std;

    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum=0,count=0;
        for(int i=0;i<k;i++)
            sum += arr[i];
        if((sum/k)>=threshold) count++;
        for(int i=1;i<=arr.size()-k;i++){
           sum += (arr[i+k-1]-arr[i-1]);
           if((sum/k)>=threshold) 
                count++;
        }

        return count;
        
    }

int main()
{
    vector<int> arr={2,2,2,2,5,5,5,8};
    int k=3, threshold = 4;
    cout<<numOfSubarrays(arr,k,threshold);
}