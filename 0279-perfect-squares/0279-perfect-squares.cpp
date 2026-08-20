class Solution {
public:
  int f(int ind,int tar,vector<vector<int>>&dp)
  {
    if(ind==1) return tar;
    if(dp[ind][tar]!=-1) return dp[ind][tar];
    int nottake=f(ind-1,tar,dp);
    int take=1e8;
    if(ind*ind<=tar) take=1+f(ind,tar-ind*ind,dp);
    return dp[ind][tar]=min(take,nottake);
  }
    int numSquares(int n) {
        int x=(int)sqrt(n);
        vector<vector<int>>dp(x+1,vector<int>(n+1,-1));
        return f(x,n,dp); 
    }
};