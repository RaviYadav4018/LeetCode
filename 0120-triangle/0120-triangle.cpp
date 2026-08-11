class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m=triangle.size();
        int n=triangle[m-1].size();
        vector<int>front(n);
        for(int i=0;i<n;i++)
        {
            front[i]=triangle[m-1][i];
        }
        for(int i=m-2;i>=0;i--)
        {
            vector<int>temp(n);
            for(int j=0;j<triangle[i].size();j++)
            {
                int d=triangle[i][j]+front[j];
                int dg=triangle[i][j]+front[j+1];
             
                temp[j]=min(d,dg);

            }
            front=temp;
        }
        return front[0];
    }
};