class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int maxp=0;
        for(int i=0;i<prices.size();i++)
        {
            int pro=prices[i]-mini;
            maxp=max(maxp,pro);
            mini=min(mini,prices[i]);
        }
        return maxp;
    }
};