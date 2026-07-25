class Solution {
public:
    int maxProduct(int n) {
        
        int max1=-1;
        int max2=-1;
        int res=0;
        while(n>0)
        {
            int x=n%10;
            if(max1==-1)
            {
                max1=x;

            }
            else
            {
                if(max1<=x)
                {
                    max2=max1;
                    max1=x;
                }
                if(max1>x&&max2<x)
                {
                    max2=x;
                }
               
            }
          n=n/10;
        }
        return max1*max2;
    }
};