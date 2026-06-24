class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        
        int dis=0;
        int rcount=0;
        int lcount=0;
        for(int i=0;i<moves.size();i++)
        {
           if(moves[i]=='R') rcount++;
           else if(moves[i]=='L') lcount++;
        }
        int scount=moves.size()-rcount-lcount;
        
            dis=abs(rcount-lcount)+scount;
       return dis;
    }
};