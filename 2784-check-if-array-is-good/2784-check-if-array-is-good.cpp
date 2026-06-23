class Solution {
public:
    bool isGood(vector<int>& nums) {
        int maxele=INT_MIN;
         vector<int>res(nums.size()-1,0);
        for(int i=0;i<nums.size();i++)
        {
            if((nums[i]-1)>=nums.size()-1) return false;
            res[nums[i]-1]++;
            maxele=max(maxele,nums[i]);
        }
        if(res[maxele-1]!=2) return false;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(res[i]==2&& i!=(maxele-1)) return false;
            if(res[i]==0) return false;
        }

        return true;
    }
};