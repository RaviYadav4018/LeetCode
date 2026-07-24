class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long ans=(1LL*k*(k+1))/2;
        long long val=k;
        int prev=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(prev!=nums[i])
            {
                prev=nums[i];
                if(nums[i]<=val)
                {
                   val++;
                   ans=ans-nums[i]+val;
                }

            }
            
        }
        return ans;
    }
};