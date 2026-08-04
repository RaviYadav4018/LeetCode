class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>res;
        int minele=*min_element(nums.begin(),nums.end());
        int maxele=*max_element(nums.begin(),nums.end());
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        int i=minele;
        while(i<=maxele)
        {
            if(!mpp[i])
            {
               res.push_back(i);
            }
            i++;
        }
       return res; 
    }
};