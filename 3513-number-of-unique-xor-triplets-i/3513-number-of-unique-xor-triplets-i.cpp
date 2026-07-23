class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
       

         if(nums.size()<3) return nums.size();
        int lar=nums.size();
        int bsize=0;
        while(lar>0)
        {
            bsize++;
            lar=lar/2;

        }
        return pow(2,bsize);
    }
};