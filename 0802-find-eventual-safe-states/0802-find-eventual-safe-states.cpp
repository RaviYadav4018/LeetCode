class Solution {
public:
    bool dfs(int node,vector<int>&vis,vector<int>&pathvis,vector<int>&nodepath,vector<vector<int>>& graph)
    {
        vis[node]=1;
        pathvis[node]=1;
        nodepath[node]=0;
        for(auto it:graph[node])
        {
            if(!vis[it])
            {
               if(dfs(it,vis,pathvis,nodepath,graph)==false)  return false;
            }
            else if(pathvis[it])
            {
                return false;
            }
        }
        nodepath[node]=1;
        pathvis[node]=0;
        return true;
    }
  
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int m= graph.size();
        int n=graph[0].size();
        vector<int>vis(m,0);
        vector<int>pathvis(m,0);
        vector<int>nodepath(m,0);
        vector<int>res;
        for(int i=0;i<m;i++)
        {
            if(!vis[i])
            {
                dfs(i,vis,pathvis,nodepath,graph);
            }
        }
        for(int i=0;i<m;i++)
        {
            if(nodepath[i]==1) res.push_back(i);
        }

      return res;  
    }
};