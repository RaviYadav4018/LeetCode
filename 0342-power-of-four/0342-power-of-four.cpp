class Solution {
public:
    bool isPowerOfFour(int n) {
         if(n<=0) return false;
        if(n==1) return true;
        
          long long val=1;

        while(val<=n)
        {
            val=val*4;
            if(val==n) return true;
        }
        return false;

        
    }
};