class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        long long presum=0;
        unordered_map<int,int>st;
        st[0]=1;
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            presum+=nums[i];
            long long req=presum-k;
            if(st.find(req)!=st.end())
            {
              cnt+=st[req];
            }
            st[presum]++;
        }
        return cnt;
    }
};