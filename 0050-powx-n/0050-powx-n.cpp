class Solution {
public:
    double myPow(double x, int n) {
        double val=1.0;
        if(n==0) return val;
         long long s=n;
          s=abs(s);
     
        while(s>0)
        {
            if(s%2==1)
            {
                 val=val*x;
                 s--;
            }
               x=x*x;
               s=s/2;
          
        }
        if(n<0) val=1/val;
        return val;

        
    }
};