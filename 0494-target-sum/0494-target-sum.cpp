class Solution {
public:
int f(int ind,int currsum,int target,vector<int>& nums)
{
    if(ind==-1)
    {
        if(currsum==target) return 1;
        else return 0;
    }
    int pos=f(ind-1,currsum+nums[ind],target,nums);
    int neg=f(ind-1,currsum-nums[ind],target,nums);

    return pos+neg;    
}
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int currsum=0;
        return f(n-1,currsum,target,nums);   
    }
};