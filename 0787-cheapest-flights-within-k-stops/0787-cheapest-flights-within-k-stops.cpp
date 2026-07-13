class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>>adj(n);
        for(auto it:flights)
        {
            adj[it[0]].push_back({it[1],it[2]});
        }
        vector<int>dist(n,1e9);
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        //stops,node,dis
        dist[src]=0;
        pq.push({0,{src,0}});
        while(!pq.empty())
        {
            auto it=pq.top();
            pq.pop();
            int stop=it.first;
            int node=it.second.first;
            int dis=it.second.second;
            if(stop>k) continue;
            for(auto iit:adj[node])
            {
                int adjnode=iit.first;
                int d=iit.second;
                if(dis+d<dist[adjnode])
                {
                    dist[adjnode]=d+dis;
                    pq.push({stop+1,{adjnode,d+dis}});
                }

            }

        }
        if(dist[dst]==1e9) return -1;
        return dist[dst];


        
    }
};