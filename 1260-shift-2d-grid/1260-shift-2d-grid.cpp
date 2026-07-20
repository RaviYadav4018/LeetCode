class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        if(k==0) return grid;
        int m=grid.size();
        int n=grid[0].size();
        int nrow,ncol;
        vector<vector<int>>res(m,vector<int>(n,0));
      for(int p=1;p<=k;p++)
      {
         for(int i=0;i<m;i++)
         {
            for(int j=0;j<n;j++)
            {
                ncol=j+1;
                nrow=i;
                if(ncol>=n)
                {
                    ncol=0;
                    nrow+=1;
                    if(nrow>=m)
                    {
                        nrow=0;
                    }
                }
                res[nrow][ncol]=grid[i][j];  
            }

         }
         grid=res;
       }
        
      return res;  
    }
};