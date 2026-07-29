class Solution {
public:
void comb(int ind,vector<int>&ds,vector<vector<int>>&res,vector<int>&arr)
{
    res.push_back(ds);
    if(ind==arr.size())
    {
        return;
    }
    for(int i=ind;i<arr.size();i++)
    {
        if(i>ind&&arr[i]==arr[i-1]) continue;
        ds.push_back(arr[i]);
        comb(i+1,ds,res,arr);
        ds.pop_back();

    }
   

}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         vector<int>arr=nums;
        vector<int>ds;
        vector<vector<int>>res;
        sort(arr.begin(),arr.end());
        comb(0,ds,res,arr);
        return res;
        
    }
};