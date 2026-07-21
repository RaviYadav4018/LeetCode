class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        vector<int>fre(51,0);
         int x=0;
        for(int i=0;i<nums.size();i++)
        {
            fre[nums[i]]++;
        }
       
         for(int i=0;i<51;i++)
        {
            if(fre[i]==2)
            {
             x^=i;
            }
        }
        return x;
    }
};