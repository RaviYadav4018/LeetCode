class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0) return false;
        long long num=0;
        int i=0;

        while(i<33&&num<n)
        {
           num=pow(2,i);
           if(num==n) return true;
           i++;
        }
        return false;
    }
};