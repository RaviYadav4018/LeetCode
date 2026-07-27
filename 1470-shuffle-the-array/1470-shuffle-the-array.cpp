class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>res(2*n);
      int i=0;
      int j=n;
      int k=0;
      while(i<n&&j<2*n)
      {
        res[k]=nums[i];
        k++;
        i++;
        res[k]=nums[j];
        k++;
        j++;
      }
      return res;
        
    }
};