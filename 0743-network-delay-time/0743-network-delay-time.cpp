class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>> adj(n+1);
        for(int i=0;i<times.size();i++)
        {
            adj[times[i][0]].push_back({times[i][1],times[i][2]});
        }
        vector<int>dist(n+1,1e9);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        dist[k]=0;
        pq.push({0,k});
         int dis=0;
        while(!pq.empty())
        {
            auto it=pq.top();
            pq.pop();
             dis=it.first;
            int node=it.second;
            for(auto iit:adj[node])
            {
                int newnode=iit.first;
                int d=iit.second;
                if(d+dis<dist[newnode])
                {
                    dist[newnode]=d+dis;
                    pq.push({d+dis,newnode});
                }

            }
        }
        int maxtime=0;
        for(int i=1;i<n+1;i++)
        {
            if(dist[i]==1e9) return -1;
            maxtime=max(maxtime,dist[i]);
          
        }
        return maxtime;
    }
};