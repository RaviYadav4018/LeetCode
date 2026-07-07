class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int minm=m;
        int minn=n;
        for(int i=0;i<ops.size();i++)
        {
            minm=min(minm,ops[i][0]);
            minn=min(minn,ops[i][1]);
            
        }
        return minn*minm;

        
    }
};