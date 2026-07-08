class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int tm=0;
        int onecnt=0;
         vector<int>delrow={0,-1,0,1};
         vector<int>delcol={-1,0,1,0};
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }
                if(grid[i][j]==1)
                {
                    onecnt++;
                }
            }
        }
        int cnt=0;
        while(!q.empty())
        {
           
            int row= q.front().first.first;
            int col= q.front().first.second;
            int t=q.front().second;
            q.pop();
            tm=max(t,tm);
            for(int i=0;i<4;i++)
            {
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];
                if(nrow>=0&&nrow<m&&ncol>=0&&ncol<n&&grid[nrow][ncol]==1&&vis[nrow][ncol]!=2)
                {
                    q.push({{nrow,ncol},t+1});
                    cnt++;
                    vis[nrow][ncol]=2;
                }
            }
        }
        if(cnt!=onecnt) return -1;
        return tm;

        
    }
};