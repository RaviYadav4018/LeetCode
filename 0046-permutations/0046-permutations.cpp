class Solution {
public:
void comb(int ind,vector<vector<int>>&res,vector<int>&arr)
{
    if(ind==arr.size())
    {
        res.push_back(arr);
        return;
    }
    for(int i=ind;i<arr.size();i++)
    {
        swap(arr[ind],arr[i]);
        comb(ind+1,res,arr);
        swap(arr[ind],arr[i]);
    }

}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>arr=nums;
        vector<vector<int>>res;
        comb(0,res,arr);
        return res;
        
    }
};