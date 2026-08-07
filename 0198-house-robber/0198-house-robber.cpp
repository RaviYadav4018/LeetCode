class Solution {
public:
    int rob(vector<int>& nums) {
        int prev1=nums[0];
        int prev2=0;
        int ans=0;
       if(nums.size()==1)return nums[0];
        for(int i=1;i<nums.size();i++)
        {
           int pick=nums[i]+prev2;
           int notpick=prev1;
           ans=max(pick,notpick);
           prev2=prev1;
           prev1=ans;
        }
        return ans;
        
    }
};