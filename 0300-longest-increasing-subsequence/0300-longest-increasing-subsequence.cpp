class Solution {
public:

    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,1);
        int maxi=0;
        for(int ind=0;ind<n;ind++)
        {
            for(int prev=0;prev<ind;prev++)
            {
                   if(nums[ind]>nums[prev]&&dp[prev]+1>dp[ind])
                   {
                    dp[ind]=dp[prev]+1;
                   }
            }
            maxi=max(maxi,dp[ind]);
        }
        return maxi;
    }
};