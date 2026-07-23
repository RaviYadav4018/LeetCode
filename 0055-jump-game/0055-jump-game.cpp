class Solution {
public:
    bool canJump(vector<int>& nums) {
        int minr=0;
        int maxr=0;
        for(int i=0;i<nums.size();i++)
        {
            if(maxr<i) return false;
            int val=min(1,nums[i]);
            minr+=val;
            maxr=max(maxr,i+nums[i]);
        }
        
        return true;
    }
};