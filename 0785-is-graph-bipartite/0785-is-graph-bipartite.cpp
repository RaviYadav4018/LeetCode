class Solution {
public:
    bool dfs(int node ,vector<int>& vis,vector<vector<int>>& graph,vector<int>& col)
    {   vis[node]=1;
        int m=graph.size();
        int n=graph[0].size();
        for(auto it:graph[node])
        {
            if(!vis[it])
            {
                col[it]=!col[node];
                if(dfs(it,vis,graph,col)==false) return false;
            }
            else if(col[it]==col[node])
            {
                return false;
            }
                
        }
       return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int m=graph.size();
        int n=graph[0].size();
        vector<int>vis(m,0);
        vector<int>col(m,-1);
        for(int i=0;i<m;i++)
        {
            if(vis[i]==0)
            {
                col[i]=0;
               if(dfs(i,vis,graph,col)==false)  return false;
            }
        }
       return true; 
    }
};