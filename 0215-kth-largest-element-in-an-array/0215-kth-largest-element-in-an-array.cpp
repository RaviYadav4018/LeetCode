class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        multiset<int> st;

        for(int x : nums)
        {
            st.insert(x);
        }

        int cnt = 1;

        for(auto it = st.rbegin(); it != st.rend(); ++it)
        {
            if(cnt == k)
                return *it;

            cnt++;
        }

        return -1;
    }
};