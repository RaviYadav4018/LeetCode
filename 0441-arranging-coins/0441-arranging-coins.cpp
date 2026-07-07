class Solution {
public:
    int arrangeCoins(int n) {
      
        int cnt=0;
         int l=1;
         int h=n;
        while(l<=h)
        {
            int mid =(h-l)/2+l;
            long long sum=1LL*mid*(mid+1)/2;
            if(sum<=n) 
            {
                cnt=mid;
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
        return cnt;
    }
};