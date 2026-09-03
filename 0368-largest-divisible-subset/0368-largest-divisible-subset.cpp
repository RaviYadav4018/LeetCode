class Solution {
public:

    vector<int> largestDivisibleSubset(vector<int>& nums) {
         int n=nums.size();
         sort(nums.begin(),nums.end());
        vector<int>dp(n+1,1),hash(n);
        int maxi=0;
        int lastind;
        for(int ind=0;ind<n;ind++)
        {
            hash[ind]=ind;
            for(int prev=0;prev<ind;prev++)
            {
                   if(nums[ind]%nums[prev]==0&&dp[prev]+1>dp[ind])
                   {
                    dp[ind]=dp[prev]+1;
                    hash[ind]=prev;
                   }
            }
            if(dp[ind]>maxi)
            {
                maxi=dp[ind];
                lastind=ind;

            }
           
        }
            vector<int>temp;
            temp.push_back(nums[lastind]);
            while(hash[lastind]!=lastind)
            {
                lastind=hash[lastind];
                temp.push_back(nums[lastind]);
            }
          reverse(temp.begin(),temp.end());
          return temp;
        
        
    }
};