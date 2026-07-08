class Solution {
public:
    void dfs(int node,vector<int>arr[],vector<int>&vis)
    {
        vis[node]=1;
        for(auto it:arr[node])
        {
            if(vis[it]==0)
            {
                dfs(it,arr,vis);
            }
        }
    }
 
    int findCircleNum(vector<vector<int>>& isConnected) {
        int m=isConnected.size();
        int n=isConnected[0].size();
        vector<int>arr[m];
        vector<int>vis(m,0);
        int cnt=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j&&isConnected[i][j]==1)
                {
                    arr[i].push_back(j);
                    arr[j].push_back(i);
                }
                 
            }
        }
    
        for(int i=0;i<m;i++)
        {
            if(vis[i]==0)
            {
                dfs(i,arr,vis);
                cnt++;
            }
        }
     

       return cnt; 
    }
};