class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>res;
        int n=nums.size();

        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                i++;
            }
            else
            {
                res.push_back(nums[i]);
            }
           
        }
        if(nums[n-1]!=nums[n-2])
        {
            res.push_back(nums[n-1]);
        }

       return res;
    }
};