class Solution {
public:
    string smallestPalindrome(string s) {
        unordered_map<char,int>mpp;
        for(int i=0;i<s.size();i++)
        {
            mpp[s[i]]++;

        }
        string res;
        char ex='A';
        
        for(char ch='a';ch<='z';ch++)
        {
            if(mpp[ch]!=0)
            {
                if(mpp[ch]%2==0)
                {
                    int n=mpp[ch]/2;
                    while(n>0)
                    {
                        res.push_back(ch);
                        n--;
                    } 
                }
                else if(mpp[ch]%2==1&&mpp[ch]!=1)
                {
                    int n=mpp[ch]/2 ;
                    ex=ch;
                    while(n>0)
                    {
                        res.push_back(ch);
                        n--;
                    } 
                }
                else if(mpp[ch]==1)
                {
                    ex=ch;
                }

            }
        }
        if(ex!='A') res.push_back(ex);
        for(char ch='z';ch>='a';ch--)
        {
            if(mpp[ch]!=0)
            {
                if(mpp[ch]%2==0)
                {
                    int n=mpp[ch]/2;
                    while(n>0)
                    {
                        res.push_back(ch);
                        n--;
                    } 
                }
                else if(mpp[ch]%2==1&&mpp[ch]!=1)
                {
                    int n=mpp[ch]/2 ;
                    while(n>0)
                    {
                        res.push_back(ch);
                        n--;
                    } 
                }

            }
        }
        return res;
        
    }
};