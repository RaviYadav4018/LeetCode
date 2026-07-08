class Solution {
public:
    void dfs(vector<vector<int>>& ans,vector<vector<int>>& vis,int row,int col,int oldcolor,int color,vector<int>& delrow,vector<int>&delcol)
    {
        int m=ans.size();
        int n=ans[0].size();
      for(int i=0;i<4;i++)
      {
        int nrow=row+delrow[i];
        int ncol=col+delcol[i];
        if(nrow>=0&&nrow<m&&ncol>=0&&ncol<n&&ans[nrow][ncol]==oldcolor&&!vis[nrow][ncol])
            {
                vis[nrow][ncol]=1;
                ans[nrow][ncol]=color;
                dfs(ans,vis,nrow,ncol,oldcolor,color,delrow,delcol);
            }
      }

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>>ans=image;
         int m=image.size();
         int n=image[0].size();
         vector<vector<int>>vis(m,vector<int>(n,0));
         vector<int>delrow={0,-1,0,1};
         vector<int>delcol={-1,0,1,0};
         int oldcolor=image[sr][sc];
         ans[sr][sc]=color;
         vis[sr][sc]=1;
         dfs(ans,vis,sr,sc,oldcolor,color,delrow,delcol);
         return ans;
        
    }
};