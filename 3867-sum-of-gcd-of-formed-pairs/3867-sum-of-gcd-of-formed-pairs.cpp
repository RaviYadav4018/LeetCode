class Solution {
public:
//32,12
int gcdfinder(int a,int b)
{
    return gcd(a,b);
}
    long long gcdSum(vector<int>& nums) {
        vector<int>gcdarr;
        int maxele=-1;
        for(int i=0;i<nums.size();i++)
        {
            maxele=max(maxele,nums[i]);
            if(maxele==nums[i])
            {
                gcdarr.push_back(nums[i]);
            }
            else
            {
                gcdarr.push_back(gcdfinder(nums[i],maxele));
            }
        }
        sort(gcdarr.begin(),gcdarr.end());
        long long tsum=0;
        int l=0;
        int r=gcdarr.size()-1;
        while(l<r)
        {
            tsum+=gcdfinder(gcdarr[l],gcdarr[r]);
            l++;
            r--;
        }
        return tsum;
        
    }
};
