class Solution {
public:
    void merge(int low,int mid,int high,vector<int>&nums)
    {
        vector<int>temp;
        int i=low;
        int j=mid+1;
        while(i<=mid&&j<=high)
        {
            if(nums[i]<=nums[j])
            {
                temp.push_back(nums[i]);
                i++;
            }
            else
            {
                temp.push_back(nums[j]);
                j++;
            }
        }
        while(i<=mid)
        {
            temp.push_back(nums[i]);
                i++;
        }
        while(j<=high)
        {
            temp.push_back(nums[j]);
                j++;
        }
        for(int i=low;i<=high;i++)
        {
            nums[i]=temp[i-low];
        }

    }
    void bubblesort(int low,int high ,vector<int>&nums)
    {
        if(low>=high) return;
        int mid=(high-low)/2+low;
        bubblesort(low,mid,nums);
        bubblesort(mid+1,high,nums);
        merge(low,mid,high,nums);
    }
    vector<int> sortArray(vector<int>& nums) {
        vector<int>res=nums;
        bubblesort(0,nums.size()-1,res);
        return res;
       
    }
};