class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size()-1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums.erase(nums.begin()+i+1);
                n--;
                i=i-1;
            }
        }
        
        return nums.size();
    }
};