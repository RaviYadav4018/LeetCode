class Solution {
public:
void queens(int col,vector<vector<string>>& res,vector<string>vec,int n,vector<int>&leftrow,vector<int>upper,vector<int>lower)
{
    if(col==n)
    {
       res.push_back(vec);
       return;
    }
    for(int i=0;i<n;i++)
    {
         if(leftrow[i]==0&&upper[n-1+col-i]==0&&lower[i+col]==0)
         {
            leftrow[i]=1;
            upper[n-1+col-i]=1;
            lower[i+col]=1;
            vec[i][col]='Q';
            queens(col+1,res,vec,n,leftrow,upper,lower);
            vec[i][col]='.';
            leftrow[i]=0;
            upper[n-1+col-i]=0;
            lower[i+col]=0;
         }
    }     
        
}
    vector<vector<string>> solveNQueens(int n) {
       
        vector<vector<string>>res;
        vector<string>vec(n);
        string s(n,'.');
        for(int i=0;i<n;i++) vec[i]=s;
       vector<int>leftrow(n,0),upper(2*n-1,0),lower(2*n-1,0);
        queens(0,res,vec,n,leftrow,upper,lower);
        return res;
    }
};