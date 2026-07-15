class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int,int>>>adj(n);
        for(auto it:roads)
        {
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        vector<long long>dist(n,LLONG_MAX);
        vector<int>ways(n,0);
       priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>>q;
        //node,dis
        q.push({0,0});
        dist[0]=0;
        ways[0]=1;
        int mod=(int)(1e9+7);
        while(!q.empty())
        {
            auto it=q.top();
            q.pop();
            long long dis=it.first;
            int node=it.second;
            if (dis > dist[node]) continue;
            for(auto iit:adj[node])
            {
                int adjnode=iit.first;
                int ed=iit.second;
                if(dis+ed<dist[adjnode])
                {
                    dist[adjnode]=dis+ed;
                    q.push({dis+ed,adjnode});
                    ways[adjnode]=(ways[node]);
                }
                else if(dis+ed==dist[adjnode])
                {
                    ways[adjnode]=(ways[adjnode]+ways[node])%mod;
                   
                }
            }
        }
        return ways[n-1]%mod;
        
    }
};