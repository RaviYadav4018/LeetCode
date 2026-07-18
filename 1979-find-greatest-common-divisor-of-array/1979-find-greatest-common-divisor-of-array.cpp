class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minnum=*min_element(nums.begin(),nums.end());
        int maxnum=*max_element(nums.begin(),nums.end());
        return gcd(maxnum,minnum);

        
    }
};