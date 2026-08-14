class Solution {
public:
int f(int ind,int size,string s,vector<int>&dp)
{
    if(ind==size) return 1;
    if(s[ind]=='0') return 0;
    if(dp[ind]!=-1) return dp[ind];
    int one=f(ind+1,size,s,dp);
    int two=0;
    if(ind+1<size)
    {
        int num=(s[ind]-'0')*10+(s[ind+1]-'0');
        if(num>=1&&num<=26) two=f(ind+2,size,s,dp);
    }
  
    return dp[ind]=one+two;
    
}
    int numDecodings(string s) {
        int n=s.size();
        vector<int>dp(101,-1);
       
        return f(0,n,s,dp);
        
    }
};