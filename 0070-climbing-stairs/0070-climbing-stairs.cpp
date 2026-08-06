class Solution {
public:
    
    int climbStairs(int n) {
       int pre1=1;
       int pre2=0;
       int ans=0;
       for(int i=1;i<=n;i++)
       {
        ans=pre1+pre2;
        pre2=pre1;
        pre1=ans;    
       }
       return ans;
    }
};