class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
         int m=isWater.size();
        int n=isWater[0].size();
        vector<vector<int>>res(m,vector<int>(n,0));
         vector<vector<int>>vis(m,vector<int>(n,0));
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(isWater[i][j]==1)
                {
                    q.push({{i,j},0});
                    vis[i][j]=1;
                    res[i][j]=0;

                }
            }
        }
         vector<int>delrow={0,-1,0,1};
         vector<int>delcol={-1,0,1,0};
        while(!q.empty())
        {
            int row=q.front().first.first;
            int col=q.front().first.second;
            int dis=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                 int nrow=row+delrow[i];
                 int ncol=col+delcol[i];
                if(nrow>=0&&nrow<m&&ncol>=0&&ncol<n&&isWater[nrow][ncol]==0&&vis[nrow][ncol]!=1)
                {
                    q.push({{nrow,ncol},dis+1});
                    res[nrow][ncol]=dis+1;
                    vis[nrow][ncol]=1;
                }
            }

        }
        return res;
        
    
        
    }
};