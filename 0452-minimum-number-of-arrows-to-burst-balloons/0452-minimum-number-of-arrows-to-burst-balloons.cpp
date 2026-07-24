class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int cnt=0;
        int l=points[0][0];
        int r=points[0][1];
        for(int i=1;i<points.size();i++)
        {
           if((l<=points[i][0]&&points[i][0]<=r)||(l<=points[i][1]&&points[i][1]<=r))
           {
              l=max(points[i][0],l);
              r=min(points[i][1],r);
           }
           else
           {
               l=points[i][0];
               r=points[i][1];
               cnt++;
           }
        }

        return cnt+1;
        
    }
};