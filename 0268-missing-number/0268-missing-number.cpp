class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
       double sum = (n*(n+1))/2;
       double tar=0;
       for(int i=0;i<n;i++)
       {
         tar+=nums[i];
       }
        
        return (sum-tar);
    }
};