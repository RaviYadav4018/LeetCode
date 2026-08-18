class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        int max1=-1;
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        for(auto it:mpp)
        {
            if(it.second==1)
            {
                 max1=max(max1,it.first);
            } 
        }
        int max2=-1;
         for(auto it:mpp)
        {
            
             max2=max(max2,it.first);
            
        }

         if(k==1) return max1;
         if(k==n) return max2;
         
           int ans=-1;
           if(mpp[nums[0]]==1) ans=max(ans,nums[0]); 
           if(mpp[nums[n-1]]==1) ans=max(ans,nums[n-1]); 
            
         
         return ans;
    }
};