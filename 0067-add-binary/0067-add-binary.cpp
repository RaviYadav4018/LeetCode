class Solution {
public:
    string addBinary(string a, string b) {
        string res="";
        int s1=a.size()-1;
        int s2=b.size()-1;
        int carry=0;
        while(s1>=0&&s2>=0)
        {
            int sum=(a[s1]-'0')+(b[s2]-'0')+carry;
            if(sum<2)
            {
                 res.insert(0,to_string(sum));
              
            }
            else
            {
               
                res.insert(0,to_string(sum%2));

            } 
            carry=sum/2;
            s1--;
            s2--;
        }
         while(s1>=0)
         {
            int sum=(a[s1]-'0')+carry;
            if(sum<2)
            {
                 res.insert(0,to_string(sum));
            }
            else
            {
               
                res.insert(0,to_string(sum%2));

            }
             carry=sum/2;
           s1--;
         }
           while(s2>=0)
        {
            int sum=(b[s2]-'0')+carry;
            if(sum<2)
            {
                 res.insert(0,to_string(sum));
            }
            else
            {
               
                res.insert(0,to_string(sum%2));

            } 
             carry=sum/2;
            s2--;
        }
        if(carry>0)  res.insert(0,to_string(1));

       return res; 
    }
};