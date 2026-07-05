class Solution {
public:
    int titleToNumber(string columnTitle) {
        int s=columnTitle.size();
        int sum=0;
        int i=0;
        while(i<s)
        {
          sum=sum*26 + (columnTitle[i]-'A'+1);
          i++;
        }
       
        return sum;
        
    }
};