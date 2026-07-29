class Solution {
public:
    int pivat(int low,int high,vector<int>&res)
    {
        int idx = low + rand() % (high - low + 1);
        swap(res[low], res[idx]);   // Move a random element to the first position

      
       int pi=res[low];
       int i=low;
       int j=high;
       while(i<j)
       {
           while(i<=high-1&&res[i]<=pi)
           {
            i++;
           }
           while(j>=low+1&&res[j]>pi)
           {
            j--;
           }
           if(i<j) swap(res[i],res[j]);
       }
         swap(res[low],res[j]);
         return j;
    }
    void quicksort(int low,int high,vector<int>&res)
    {

        if(low<high)
        {
            int piv=pivat(low,high,res);
            quicksort(low,piv-1,res);
            quicksort(piv+1,high,res);
        }
    }
  
    vector<int> sortArray(vector<int>& nums) {
        vector<int>res=nums;
        quicksort(0,nums.size()-1,res);
        return res; 
    }
};