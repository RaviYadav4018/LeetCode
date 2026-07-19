class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int>lastseen(26,0);
        for(int i=0;i<s.size();i++)
        {
            lastseen[s[i]-'a']=i;
        }
        vector<int>vist(26,0);
         string ss="";
        for(int i=0;i<s.size();i++)
        {
            if(!vist[s[i]-'a'])
            {
                while(!ss.empty()&&ss.back()>s[i]&&lastseen[ss.back()-'a']>i)
                {
                    vist[ss.back()-'a']=0;
                    ss.pop_back();
                }
                vist[s[i]-'a']=1;
                ss.push_back(s[i]);
            }

        }
        return ss;
        

    }
};