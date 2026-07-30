class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        
        int total=0;
        if(n<9) return  n;
        else if(n<17)
        {
            total=8+2*(n-8);
        }
        else if(n<25)
        {
            total=24+3*(n-16);
        }
        else
        {
            total=48+4*(n-24);
        }
        
        return total;
    }
};