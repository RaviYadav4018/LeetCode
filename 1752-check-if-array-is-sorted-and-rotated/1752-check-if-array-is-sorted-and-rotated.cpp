class Solution {
public:
    bool check(vector<int>& nums) {
        
        int f=nums[0];
        int l=nums[nums.size()-1];
        int cnt=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<nums[i-1]) cnt++;

        }
        if(cnt==0&&f<=l) return true;
        else if(cnt==1&&l<=f) return true;
        else return false;
   
    }
};