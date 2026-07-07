class Solution {
public:
    string addStrings(string num1, string num2) {
        string res;
        int i=num1.size()-1;
        int j=num2.size()-1;
        int carry=0;

        while(i>=0&&j>=0)
        {
            int sum= (num1[i]-'0')+(num2[j]-'0')+carry;
            res.push_back('0'+sum%10);
            carry=sum/10;
            i--;
            j--;
        }
         while(i>=0)
        {
            int sum= (num1[i]-'0')+carry;
            res.push_back('0'+sum%10);
            carry=sum/10;
            i--;
           
        }
         while(j>=0)
        {
            int sum= (num2[j]-'0')+carry;
            res.push_back('0'+sum%10);
            carry=sum/10;
            j--;
        }
        if(carry>0) res.push_back('0'+carry);
         reverse(res.begin(),res.end());
        return res;
    }
};