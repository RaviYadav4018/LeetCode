class Solution {
public:
    bool isrotated(int num)
    {
        string temp=to_string(num);
    
        for(int i=0;i<temp.size();i++)
        {
            if(temp[i]=='2'||temp[i]=='5')
            {
                temp[i]='7'-temp[i];
            }
            else if(temp[i]=='6')
            {
                temp[i]='9';
            }
            else if(temp[i]=='9')
            {
                temp[i]='6';
            }
            else if(temp[i]=='3'||temp[i]=='4'||temp[i]=='7') return false;
        }
        if(temp==to_string(num)) return false;
        else return  true;


    }
    
    int rotatedDigits(int n) {
        int count=0;
        for(int i=1;i<=n;i++)
        {
          if(isrotated(i)) count++;
        }
        return count;
    }
};