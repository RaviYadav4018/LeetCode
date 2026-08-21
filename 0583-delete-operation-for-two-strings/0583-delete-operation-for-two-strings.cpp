class Solution {
public:
int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        for(int i=0;i<=n;i++) dp[i][0]=0;
         for(int i=0;i<=m;i++) dp[0][i]=0;
         for(int i=1;i<=n;i++)
         {
            for(int j=1;j<=m;j++)
            {
                if(text1[i-1]==text2[j-1]) dp[i][j]=1+dp[i-1][j-1];
                else
                {
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
            }
         }
        return dp[n][m];
    }
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        int lcs=longestCommonSubsequence(word1,word2);
        return m+n-2*lcs;
    }
};