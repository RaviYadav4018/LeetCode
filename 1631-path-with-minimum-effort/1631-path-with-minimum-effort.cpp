class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int m=heights.size();
        int n=heights[0].size();
        vector<vector<int>>dist(m,vector<int>(n,1e9));
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        vector<int>dr={0,-1,0,1};
        vector<int>dc={-1,0,1,0};
        pq.push({0,{0,0}});
        dist[0][0]=0;
        while(!pq.empty())
        {
            auto it=pq.top();
            pq.pop();
            int dis=it.first;
            int row=it.second.first;
            int col=it.second.second;
            if(row==m-1&&col==n-1)
            {
                return dis;
            }
            for(int i=0;i<4;i++)
            {  
                    int newr=row+dr[i];
                    int newc=col+dc[i];
        
                    if(newr>=0&&newc>=0&&newr<m&&newc<n)
                    {
                        int diff=max(dis,abs(heights[newr][newc]-heights[row][col]));
                        if(diff< dist[newr][newc])
                        {
                            dist[newr][newc]=diff;
                            pq.push({diff,{newr,newc}});
                        }
                        
                    }
            }
                   


        }
       return -1;
    }
};