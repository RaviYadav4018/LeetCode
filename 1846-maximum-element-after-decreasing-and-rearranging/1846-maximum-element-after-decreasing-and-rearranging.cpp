class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
       
        sort(arr.begin(),arr.end());
        arr[0]=1;
           int maxele=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            int ab=abs(arr[i]-arr[i-1]);
            if(ab>1)
            {
                arr[i]=1+arr[i-1];
            }
            maxele=max(maxele,arr[i]);

        }

       return maxele; 
    }
};