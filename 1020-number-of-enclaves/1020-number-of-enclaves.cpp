class Solution {
public:
    void dfs(int row,int col,vector<vector<int>>& vis,vector<vector<int>>& grid,vector<int>&delrow,vector<int>&delcol)
    {
        int m=grid.size();
        int n=grid[0].size();
        vis[row][col]=1;
        for(int i=0;i<4;i++)
        {
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow>=0&&ncol>=0&&nrow<m&&ncol<n&&!vis[nrow][ncol]&&grid[nrow][ncol]==1)
            {
                dfs(nrow,ncol,vis,grid,delrow,delcol);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int cnt=0;
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));
        vector<int>delrow={0,-1,0,1};
        vector<int>delcol={-1,0,1,0};
        for(int i=0;i<m;i++)
        {
            if(grid[i][0]==1&&vis[i][0]==0)
            {
                dfs(i,0,vis,grid,delrow,delcol);
            }
            if(grid[i][n-1]==1&&vis[i][n-1]==0)
            {
                dfs(i,n-1,vis,grid,delrow,delcol);
            }
        }
         for(int i=0;i<n;i++)
        {
            if(grid[0][i]==1&&!vis[0][i])
            {
                dfs(0,i,vis,grid,delrow,delcol);
            }
            if(grid[m-1][i]==1&&!vis[m-1][i])
            {
                dfs(m-1,i,vis,grid,delrow,delcol);
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1&&vis[i][j]==0) cnt++;
            }
        }
        return cnt;
        
    }
};