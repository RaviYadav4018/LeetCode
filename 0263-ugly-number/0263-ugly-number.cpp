class Solution {
public:
    bool isUgly(int n) {
        if(n<=0) return false;
        if(n>0&&n<=6) return true;
        int i=2;
        while(i<=n/i&&n>5)
        {
            if(n%i==0&&n!=i) n=n/i;
            else i++;
        }
        if(n>5) return false;
        return true;

        
    }
};