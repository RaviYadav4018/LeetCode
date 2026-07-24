class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        if(nums.size()==1) return 1;
        unordered_set<int>st;
        unordered_set<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i;j<nums.size();j++)
            {
                 st.insert(nums[i]^nums[j]);
            }
           
        }
        for(auto it:st)
        {
            for(int i=0;i<nums.size();i++)
            {
                ans.insert(nums[i]^it);
            }
        }
     
        return  ans.size();
    }
};