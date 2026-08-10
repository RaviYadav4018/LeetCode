class Solution {
public:
 int f(int row,int col,vector<vector<int>>&dp,vector<vector<int>>& grid)
   {
    if(row<0||col<0) return 1e9;
    if(row==0&&col==0) return grid[row][col];
    if(dp[row][col]!=-1) return dp[row][col];
    long long up=grid[row][col]+f(row-1,col,dp,grid);
    long long left=grid[row][col]+f(row,col-1,dp,grid);
    return dp[row][col]=min(left,up);
    
   }
    int minPathSum(vector<vector<int>>& grid) {
          int m=grid.size();
         int n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
       
        return f(m-1,n-1,dp,grid);
        
    }
};