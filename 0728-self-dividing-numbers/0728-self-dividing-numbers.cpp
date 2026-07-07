class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>res;
        for(int i=left;i<=right;i++)
        {
            int num=i;
            bool nu=true;
            while(num>0)
            {
                if(num%10==0) 
                {
                    nu=false;
                    break;
                }
                else if(i%(num%10)!=0)
                {
                    nu=false;
                    break;

                }
                num=num/10;
            }
            if(nu==true) res.push_back(i);
        }
        return res;
    }
};