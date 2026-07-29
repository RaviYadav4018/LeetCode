class Solution {
public:
    void comb(int ind,int n,int tar,vector<int>&ds,vector<int>& candidates,vector<vector<int>>&res) 
    {
        if(ind==n)
        {
             if(tar==0)
            {
                res.push_back(ds);
                
            }
            return;

        }
        if(candidates[ind]<=tar)
        {
            ds.push_back(candidates[ind]);
            comb(ind,n,tar-candidates[ind],ds,candidates,res);
            ds.pop_back();
        }
         comb(ind+1,n,tar,ds,candidates,res);

        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>ds;
        comb(0,candidates.size(),target,ds,candidates,res);
        return res; 
    }
};