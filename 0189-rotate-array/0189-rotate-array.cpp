class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>dp(n,0);
        k=k%n;
        int cnt=0;
       for(int i=n-k;i<n;i++)
       {
        dp[cnt]=nums[i];
        cnt++;
       }
       for(int i=0;i<n-k;i++)
       {
        dp[cnt]=nums[i];
        cnt++;
       }
       
      nums=dp;  
    }
};