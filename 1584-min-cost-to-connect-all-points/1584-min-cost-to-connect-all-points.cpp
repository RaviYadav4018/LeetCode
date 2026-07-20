class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n=points.size();
        vector<vector<pair<int,int>>>adj(n);
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int dis=abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]);
                adj[i].push_back({j,dis});
                adj[j].push_back({i,dis});
            
            }
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>vist(n,0);
        pq.push({0,0});
        int totalcost=0;
        while(!pq.empty())
        {
            auto it =pq.top();
            pq.pop();
            int node=it.second;
            int dist=it.first;
            if(vist[node]==1) continue;
            vist[node]=1;
            totalcost+=dist;

            for(auto iit:adj[node])
            {
                int adjnode=iit.first;
                int adjd=iit.second;
                if(!vist[adjnode])
                {
                     pq.push({adjd,adjnode});

                }
               
            }
        }
        return totalcost;
        
    }
};