class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()<4) return nums[0];
           sort(nums.begin(),nums.end());
         int res;
        int n=nums.size();

        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                i=i+2;
            }
            else
            {
                res=nums[i];
            }
           
        }
        if(nums[n-1]!=nums[n-2])
        {
            res=nums[n-1];
        }

       return res;
        
    }
};