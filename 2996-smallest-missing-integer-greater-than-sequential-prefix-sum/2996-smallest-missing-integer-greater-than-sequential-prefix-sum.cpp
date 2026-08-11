class Solution {
public:
    int missingInteger(vector<int>& nums) {
        set<int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp.insert(nums[i]);
        }
       
    
     
       int r=1;
       int cnt=1;
       int presum=nums[0];
       while(r<nums.size())
       {
        if(nums[r]==nums[r-1]+1)
        {
            presum+=nums[r];
            cnt++;
            r++;
        }
        else
        {
           break;
        }

       }
     

     while(mpp.find(presum)!=mpp.end())
     {
        presum++;
     }
      return presum;
    }
};