class Solution {
public:
    string reverseWords(string s) {
        string res="";
        for(int i=0;i<s.size();i++)
        {
            string ss="";
            while(i<s.size()&&s[i]!=' ')
            {
                ss+=s[i];
                i++;
            }
            if(ss!="")
            {
                reverse(ss.begin(),ss.end());
                res+=ss;
                res+=' ';
            }
        }
       res.pop_back();
       return res;

    }
};