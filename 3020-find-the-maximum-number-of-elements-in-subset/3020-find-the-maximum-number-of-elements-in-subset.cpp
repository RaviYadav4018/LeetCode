class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long ,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        int ans=1;
        if(mpp.count(1))
        {
            int cnt=mpp[1];
            ans=(cnt%2==0) ? cnt-1:cnt;
        }
        for(auto it:mpp)
        {
            if(it.first==1) continue;

            long long cur=it.first;
            int len=0;
            while(mpp.count(cur)&&mpp[cur]>=2)
            {
                len+=2;
                cur=cur*cur;

            }
            if(mpp.count(cur)&&mpp[cur]==1) len=len+1;
            else len=len-1;
            ans=max(ans,len);

        }
        return ans;
    }
};