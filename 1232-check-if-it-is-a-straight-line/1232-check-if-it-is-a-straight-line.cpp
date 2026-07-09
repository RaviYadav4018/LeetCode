class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int m=coordinates.size();
        int y1=coordinates[0][1];
        int x1=coordinates[0][0];
        int y2=coordinates[1][1];
        int  x2=coordinates[1][0];
        int dx=x2-x1;
        int dy=y2-y1;
       
        for(int i=2;i<m;i++)
        {
            int  y=coordinates[i][1];
            int x=coordinates[i][0];
            if((y-y1)*dx!=(x-x1)*dy) return false;

        }
        return true;
    }
};