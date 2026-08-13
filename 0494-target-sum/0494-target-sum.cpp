class Solution {
public:
int f(int ind,int currsum,int target,vector<int>& nums,vector<vector<int>>&dp)
{
    if(ind==-1)
    {
        if(currsum==target) return 1;
        else return 0;
    }
    if(dp[ind][currsum+1000]!=-1) return dp[ind][currsum+1000];
    int pos=f(ind-1,currsum+nums[ind],target,nums,dp);
    int neg=f(ind-1,currsum-nums[ind],target,nums,dp);

    return dp[ind][currsum+1000]=pos+neg;    
}
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int currsum=0;
        vector<vector<int>>dp(n,vector<int>(2002,-1));
        return f(n-1,currsum,target,nums,dp);   
    }
};