class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l=0;
        int r=nums.size()-1;
    
        while(l<=r)
        {
            while(r>=0&&nums[r]==val)
            {
                nums.erase(nums.begin()+r);
                r--;
            }
            if(l>r) break;
             if(nums[l]== val)
             {
                swap(nums[l],nums[r]);
                nums.erase(nums.begin()+r);
                r--;
                 
             }
             else 
             {
               l++;
             }
             
           
        }
        return nums.size();
    }
};