class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int>res(2,0);
        int w=1;
        int l=area;
        while(w<=l)
        {
            long long mul= 1LL*w*l;
            if(mul==area)
            {
                res[0]=l;
                res[1]=w;
                 l--;
                w++;
            }
            else if(mul>area)
            {
                l--;

            }
            else{
                w++;
            }
           
        }
       return res; 
    }
};