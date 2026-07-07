class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int h=nums.size()-1;
        int mul1=nums[0]*nums[1]*nums[h];
        int mul2=nums[h]*nums[h-1]*nums[h-2];
        return mul1>=mul2 ? mul1: mul2;


        
      
        
    }
};