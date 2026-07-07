class Solution {
public:
    bool isPerfectSquare(int num) {
        int l=1;
        int r=num;
        while(l<=r)
        {
            int mid=(r-l)/2+l;
            long long val=1LL*mid*mid;
            if(val==num) return true;
            else if(val>num)
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return false;
    }
};