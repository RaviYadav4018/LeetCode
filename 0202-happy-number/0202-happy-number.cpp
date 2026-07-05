class Solution {
public:
    bool isHappy(int n) {
        long long x=n;
        unordered_map<long long,int>mpp;
        mpp[x]=1;
        while(!(x==1))
        {
            long long val=0;
            while(x>0)
            {
                val+=pow((x%10),2);
                x=x/10;
            }
            x=val;
            if(mpp[x]==1) return false;
            mpp[x]=1;
        }
        return true;
        
    }
};