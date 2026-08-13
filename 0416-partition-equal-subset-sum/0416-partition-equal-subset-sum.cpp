class Solution {
public:
    bool f(int ind,int tar,vector<int>& nums,vector<vector<int>>&dp)
    {
        if(tar==0) return true;
        if(ind==0) return nums[0]==tar;
        if(dp[ind][tar]!=-1) return dp[ind][tar];
        bool notake=f(ind-1,tar,nums,dp);
        bool take=false;
        if(nums[ind]<=tar) take=f(ind-1,tar-nums[ind],nums,dp);
        return dp[ind][tar]=take||notake;
    }
    bool canPartition(vector<int>& nums) {
        int totsum=0;
        
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            totsum+=nums[i];
        }
        vector<vector<int>>dp(n,vector<int>(totsum+1,-1));
        if(totsum%2==1) return false;
        return f(n-1,totsum/2,nums,dp);
        
    }
};