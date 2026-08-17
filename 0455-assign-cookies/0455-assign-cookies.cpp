class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int gr=0;
        int sp=0;
        int cnt=0;
        while(sp<s.size()&&gr<g.size())
        {
            if(g[gr]<=s[sp])
            {
                gr++;
                sp++;
                cnt++;
            }
            else sp++;   
        }
        return cnt;
    }
};