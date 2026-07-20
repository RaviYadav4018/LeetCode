class Solution {
public:
int timer=1;
    void dfs(int node,int parent,vector<vector<int>> &adj,vector<int>&low,
    vector<int>&tin,vector<int>&vist,vector<vector<int>>&res)
    {
        low[node]=tin[node]=timer;
        timer++;
        vist[node]=1;
       
        for(auto it:adj[node])
        {
            if(it==parent) continue;
            int adjnode=it;
            if(!vist[adjnode])
            {
                dfs(adjnode,node,adj,low,tin,vist,res);
                low[node]=min(low[node],low[adjnode]);
                if(low[adjnode]>tin[node])
                {
                    res.push_back({node,adjnode});
                }
             

            }
            else
            {
                low[node]=min(low[node],low[adjnode]);
            }
        }

    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {

        vector<vector<int>>adj(n);
        for(auto it:connections)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);

        }
        vector<int>low(n);
        vector<int>tin(n);
        vector<int>vist(n,0);
        vector<vector<int>>res;
        for(int i=0;i<n;i++)
        {
            if(!vist[i])
            {
                dfs(i,-1,adj,low,tin,vist,res);
            }
        }
        if(res.size()==0) return {};
        return res;
        
    }
};