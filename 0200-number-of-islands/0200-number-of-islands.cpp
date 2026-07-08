class Solution {
public:
    void dfs(int row,int col,vector<vector<int>>& vis
    ,vector<vector<char>>& grid, vector<int>&delrow,vector<int>&delcol)
    {
         int m=grid.size();
         int n=grid[0].size();
         for(int i=0;i<4;i++)
         {
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow>=0&&nrow<m&&ncol>=0&&ncol<n&&grid[nrow][ncol]=='1'&&!vis[nrow][ncol])
            {
                vis[nrow][ncol]=1;
                dfs(nrow,ncol,vis,grid,delrow,delcol);
            }
         }
         
    }
    int numIslands(vector<vector<char>>& grid) {
         int m=grid.size();
         int n=grid[0].size();
         vector<vector<int>>vis(m,vector<int>(n,0));
         int cnt=0;
         vector<int>delrow={0,-1,0,1};
         vector<int>delcol={-1,0,1,0};
         for(int i=0;i<m;i++)
         {
            for(int j=0;j<n;j++)
            {
                if(!vis[i][j]&&grid[i][j]=='1')
                {
                    vis[i][j]=1;
                    dfs(i,j,vis,grid,delrow,delcol);
                    cnt++;
                }
            }
         }
         return cnt;
        
    }
};