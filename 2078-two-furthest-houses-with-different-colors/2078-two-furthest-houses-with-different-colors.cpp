class Solution {
public:
    int maxDistance(vector<int>& colors) {
       
        int ans=0;
       int n=colors.size();
        
        for(int i=colors.size()-1;i>=0;i--)
        {
            if(colors[i]!=colors[0])
            {
              ans=max(ans,i);
              break;
            }
            
        }

        for(int i=0;i<colors.size();i++)
        {
            if(colors[i]!=colors[colors.size()-1])
            {
               ans=max(ans,(n-i-1));
               break;
            }
        }
        return ans;
    }
};