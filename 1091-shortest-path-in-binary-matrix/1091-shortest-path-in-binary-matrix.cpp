class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dist(m,vector<int>(n,1e9));
        queue<pair<int,pair<int,int>>>pq;
       // priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
       if(grid[0][0]!=0) return -1;
        pq.push({1,{0,0}});
        dist[0][0]=1;
        while(!pq.empty())
        {
            auto it=pq.front();
            pq.pop();
            int dis=it.first;
            int row=it.second.first;
            int col=it.second.second;
            if(row==m-1&&col==n-1)
            {
                return dis;
            }
            for(int i=-1;i<=1;i++)
            {
                for(int j=-1;j<=1;j++)
                {
                    if(i==0&&j==0) continue;
                    int newr=row+i;
                    int newc=col+j;
                    if(newr>=0&&newc>=0&&newr<m&&newc<n&&grid[newr][newc]==0&&dis+1<dist[newr][newc])
                    {
                        dist[newr][newc]=dis+1;
                        pq.push({dis+1,{newr,newc}});
                    }
                }
            }


        }
       return -1;
        
    }
};