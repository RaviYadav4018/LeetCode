class Solution {
public:
void comb(int ind,int tar,vector<int>&ds,vector<vector<int>>&res,vector<int>& arr)
{
    if(tar==0)
    {
        res.push_back(ds);
        return ;

    }
    for(int i=ind;i<arr.size();i++)
    {
        if(i>ind&&arr[i]==arr[i-1]) continue;
        if(arr[i]<=tar)
        {
            ds.push_back(arr[i]);
            comb(i+1,tar-arr[i],ds,res,arr);
            ds.pop_back();
        }
        
    }

}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>arr=candidates;
        vector<int>ds;
        vector<vector<int>>res;
        sort(arr.begin(),arr.end());
        comb(0,target,ds,res,arr);

        return res;
        
    }
};