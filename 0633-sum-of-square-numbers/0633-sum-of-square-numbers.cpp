class Solution {
public:
    bool judgeSquareSum(int c) {
        int x=sqrt(c);

        int l=0;
        int r=x;
        long long ans=0;
        while(l<=r)
        {
            ans=1LL*l*l+1LL*r*r;
            if(ans==c) return true;
            else if(ans>c) r=r-1;
            else l=l+1;
        }
        return false;
    }
};