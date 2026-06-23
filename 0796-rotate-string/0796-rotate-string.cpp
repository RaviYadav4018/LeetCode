class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        int i=0;
        if(s==goal) return true;
        while(i<n)
        {
            char ch=s[0];
            string ch1=s.substr(1,n);
            s=ch1+ch;
            if(s==goal) return true;
            i++;
        }

       return false;

    }
};