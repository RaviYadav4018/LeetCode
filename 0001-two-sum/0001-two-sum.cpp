class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>soll(2);
        unordered_map<int,int>mapp;
        for(int i=0;i<nums.size();i++)
        {
            if(mapp.find(target-nums[i])!=mapp.end())
            {
                soll[0] = mapp[target-nums[i]];
                soll[1]=i;
                break;
            }
            mapp[nums[i]]=i;

        }
        return soll;

    }
};