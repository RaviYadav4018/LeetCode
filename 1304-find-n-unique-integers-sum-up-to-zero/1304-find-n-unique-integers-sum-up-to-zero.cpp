class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>res;
        int i=1;
        while(n>0)
        {
            if(n%2==1) 
            {
                res.push_back(0);
                n--;
            }
            else
            {
                res.push_back(i);
                res.push_back(-i);
                i++;
                n=n-2;
            }
        }
       return res; 
    }
};