class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
       priority_queue<pair<int,int>>pq;
       for(auto it:mpp)
       {
        pq.push({it.second,it.first});
       }
       vector<int>res;
       while(k>0)
       {
         auto it=pq.top();
         pq.pop();
         res.push_back(it.second);
         k--;
       }
       return res;
    }
};