class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumodd=0;
        int sumeven=0;
        int res;
        for(int i=1;i<=n;i++)
        {
            sumodd+=2*i-1;
            sumeven+=2*i;
        }
        
        for(int i=1;i<=min(sumodd,sumeven);i++)
        {
            if(sumodd%i==0&&sumeven%i==0) res=i;
        }
        return res;
    }
};