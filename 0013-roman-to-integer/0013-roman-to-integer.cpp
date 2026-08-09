class Solution {
public:
    int romanToInt(string s) {
        

   map<char, int> vall={
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    int ans=0;
    for(int i=0;i+1<s.length();++i)
    {
        if(vall[s[i]]<vall[s[i+1]])
        {
            ans-=vall[s[i]];

        }
        else
        {
            ans+=vall[s[i]];
        }
        
    }
    return ans+vall[s.back()];
   
 }
    
};