class Solution {
public:
    string reverseWords(string s) {
        string res="";
        for(int i=0;i<s.size();i++)
        {
            string ss="";
            while(i<s.size()&&s[i]!=' ')
            {
                ss=s[i]+ss;
                i++;
            }
            if(ss!="")
            {
                
                res+=ss;
                res+=' ';
            }
        }
       res.pop_back();
       return res;

    }
};