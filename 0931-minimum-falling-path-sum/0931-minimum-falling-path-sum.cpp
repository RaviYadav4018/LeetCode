class Solution {
public:

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m=matrix.size();
         int n=matrix[0].size();
        vector<int>dp(n,-1);
      
       for(int i=0;i<n;i++)
       {
        dp[i]=matrix[0][i];
       }
       for(int i=1;i<m;i++)
       {
        vector<int>temp(n);
        for(int j=0;j<n;j++)
        {
           
            int up=matrix[i][j]+dp[j];
             int left=matrix[i][j];
            if(j>0) left+=dp[j-1]; 
            else left+=1e9 ;
           
            int right=matrix[i][j];
            if(j+1<n) right+=dp[j+1];
            else  right+=1e9;
            temp[j]=min(up,min(left,right));
        }
        dp=temp;
       }
        int mini=INT_MAX;
       for(int i=0;i<n;i++)
       {
        mini=min(mini,dp[i]);
       }
        return mini;
        
        
    }
};