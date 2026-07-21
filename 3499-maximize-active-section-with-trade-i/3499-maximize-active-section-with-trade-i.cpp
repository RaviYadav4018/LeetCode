class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        vector<int>si;
        int ones=0;
        int maxone=INT_MIN;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1') ones++;
            else
            {
                int j=i;
                int ncnt=0;
                while(j<s.size()&&s[j]==s[i])
                {
                    ncnt++;
                    j++;
                }
                i=j-1;
                si.push_back(ncnt);
            }
        }
        if(si.size()<2) return ones;
        for(int i=1;i<si.size();i++)
        {
            maxone=max(maxone,si[i]+si[i-1]);

        }
     return maxone+ones;
    }
};