class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int res=0;
        int l=0;
        int h=citations.size()-1;
        int n=citations.size();
        while(l<=h)
        {
            int mid=(h-l)/2+l;
          
           
            if(citations[mid]>=n-mid)
            {
                  res=n-mid;
                  h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }

       return res; 
    }
};