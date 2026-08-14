class Solution {
public:
int f(int row,int col,vector<vector<int>>& matrix,vector<vector<int>>& dp,vector<int>&delr,vector<int>&delc)
{
    int m=matrix.size();
    int n=matrix[0].size();
    if(dp[row][col]!=-1) return dp[row][col];
    int maxlen=1;
    for(int i=0;i<4;i++)
    {
        int nrow=row+delr[i];
        int ncol=col+delc[i];
        if(nrow>=0 && ncol>=0 && nrow<m && ncol<n && matrix[row][col]<matrix[nrow][ncol])
        {
            maxlen=max(maxlen,1+f(nrow,ncol,matrix,dp,delr,delc));
        }

    }
    return dp[row][col]=maxlen;

}
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        vector<int>delr={1,-1,0,0};
        vector<int>delc={0,0,1,-1};
        int maxi=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                maxi=max(maxi,f(i,j,matrix,dp,delr,delc));
            }
        }
        return maxi;
    }
};