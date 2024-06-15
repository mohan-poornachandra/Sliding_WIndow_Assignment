//Leetcode 2302
#include<iostream>
#include<vector>
using namespace std;

    long long countSubarrays(vector<int>& nums, long long k) {
        long long score,sum=0;
        //Applying sliding window ans also calculating score for that subarray. 
        int i=0,j=0;
        long long ans=0;
        while(j<nums.size())
        {   
            sum +=nums[j];
            score = (j-i+1)*sum;
            while(score>=k)
            {
                ans += (j-i);
                sum -= nums[i];
                i++;
                score= sum*(j-i+1);
            }
            j++;
        }
        while(i<nums.size()){
            ans += (j-i);
            sum -= nums[i];
            i++;
            score= sum*(j-i+1);
        }
        return ans;
    }

int main()
{
    vector<int> nums={2,1,4,3,5};
    long long k=10;
    cout<<countSubarrays(nums,k)<<endl;

}