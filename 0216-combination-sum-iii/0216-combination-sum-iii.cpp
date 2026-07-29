class Solution {
public:
    void comb(int ind,int tar,int k,vector<int>&ds,vector<vector<int>>&res)
    {
        if(ds.size()==k)
        {
            if(tar==0)
            {
                res.push_back(ds);

            }
            return;
        }
        for(int i=ind+1;i<=9;i++)
        {
            if(i<=tar)
            {
                ds.push_back(i);
                comb(i,tar-i,k,ds,res);
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        int maxnum=k*9;
        vector<vector<int>>res;
        vector<int>ds;
        if(n>maxnum) return res;
        comb(0,n,k,ds,res);
        return res;
        
        
        
    }
};