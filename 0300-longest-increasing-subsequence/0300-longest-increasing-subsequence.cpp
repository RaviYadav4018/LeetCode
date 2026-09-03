class Solution {
public:

    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
      vector<int>dp(n+1,0),cur(n+1,0);
  
        for(int ind=n-1;ind>=0;ind--)
        {
            for(int prev=-1;prev<ind;prev++)
            {
                    int len=dp[prev+1];
                    if(prev==-1||nums[ind]>nums[prev])
                    {
                        len=max(len,1+dp[ind+1]);
                    }
                 cur[prev+1]=len;
            }
            dp=cur;
        }
        return dp[0];
    }
};