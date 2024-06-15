//Leetcode 1248
#include<iostream>
#include<vector>
using namespace std;

    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int i=0,j=0,cnt=0,ans=0,odd=0;
        while(j<n){
            if(nums[j]%2!=0){
                cnt = 0;
                odd++;
            }
            while(i<=j and odd == k){
                cnt++;
                if(nums[i++]%2 != 0)odd--;
            }
            ans += cnt;
            j++;
        }
        return ans;
    }
int main()
{
    vector<int> nums={2,2,2,1,2,2,1,2,2,2};
    int k=2;
    cout<<numberOfSubarrays(nums,k);
}