class Solution {
public:
    bool checkprime(int n)
    {
        if(n<2) return false;
        for(int i=2;i<=n/i;i++)
        {
            if(n%i==0) return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int summ=0;
        for(int i=left;i<=right;i++)
        {
            int num=i;
            int cnt=0;
            while(num>1)
            {
                if(num%2==1) cnt++;
                num=num/2;

            }
            if(num==1) cnt++;
            if(checkprime(cnt)) summ++;
        }
        return summ;
    }
};