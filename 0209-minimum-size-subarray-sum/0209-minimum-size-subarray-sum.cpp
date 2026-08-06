class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int l=0;
        int r=0;
        long long sum=0;
        int minlen=INT_MAX;
      while(r<nums.size())
        {
            sum+=nums[r];
            
            if(sum>=target)
            {
               minlen=min(minlen,r-l+1);
                while(sum>target)
                {
                   minlen=min(minlen,r-l+1);
                   sum-=nums[l];
                   l++;
                }
                if(sum==target) minlen=min(minlen,r-l+1);
              
            }
          
              r++;    
        }
        if(minlen==INT_MAX) return 0;
        return minlen;
    }
};