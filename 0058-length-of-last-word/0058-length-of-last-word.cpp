class Solution {
public:
    int lengthOfLastWord(string s) {
        string ans="";
        string prev="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                if(ans!="")  prev=ans;
               
                ans="";
            }
            else
            {
                ans+=s[i];

            }

            
        }
        if(ans!="")  prev=ans;
        return prev.size();
        
    }
};