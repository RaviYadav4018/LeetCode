class Solution {
public:
    string reverseWords(string s) {
         stack<string>q;
         string temp="";
         string res;
         for(int i=0;i<s.size();i++)
         {
            if(s[i]==' ')
            {
                if(temp!="") q.push(temp);
                temp="";
            }
            else
            {
                temp.push_back(s[i]);
            }
         }
         if(temp!="") q.push(temp);
         while(!q.empty())
         {
            string s1=q.top()+' ';
            res=res+s1;
            q.pop();

         }
         res.pop_back();
         return res;
        
    }
};