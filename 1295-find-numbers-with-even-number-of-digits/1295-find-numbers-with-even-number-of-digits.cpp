class Solution {
public:
    bool checknum(int n)
    {
        
        int cn=0;
        while(n>0)
        {
            cn++;
            n=n/10;
        }
        if(cn%2==0) return true;
        return false;
    }
    int findNumbers(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(checknum(nums[i])) cnt++;
        }
        return cnt;
    }
};