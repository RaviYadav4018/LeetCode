class Solution {
public:
void comb(int ind,vector<int>&ds,vector<vector<int>>&res,vector<int>&arr)
{
    if(ind==arr.size())
    {
        res.push_back(ds);
        return;
    }
    ds.push_back(arr[ind]);
    comb(ind+1,ds,res,arr);
    ds.pop_back();
    comb(ind+1,ds,res,arr);

}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>arr=nums;
        vector<int>ds;
        vector<vector<int>>res;
        sort(arr.begin(),arr.end());
        comb(0,ds,res,arr);
        return res;
    }
};