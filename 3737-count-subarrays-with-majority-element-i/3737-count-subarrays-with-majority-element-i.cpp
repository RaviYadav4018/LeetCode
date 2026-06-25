class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        // n<1000 so o(n^2)

     
        int total=0;
        for(int i=0;i<nums.size();i++)
        {
            int cnt=0;
            for(int j=i;j<nums.size();j++)
            {
              if(nums[j]==target) cnt++;
              if(cnt>((j-i+1)/2)) 
              {
                total++;
              }

            }
        }
        return total;
        
    }
};