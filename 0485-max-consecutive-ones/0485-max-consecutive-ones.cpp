class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxc=0;
        int cnt=0;
        int i=0;
       while(i<nums.size())
       {
        if(nums[i]==1)
        {
            cnt++;
        }
        else
        {
          maxc=max(maxc,cnt);
          cnt=0;
        }
        i++;
       }
        maxc=max(maxc,cnt);
         
        return maxc;
    }
};