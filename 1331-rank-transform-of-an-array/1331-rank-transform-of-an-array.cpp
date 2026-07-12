class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        vector<int>res(n);
        vector<int>sortarr=arr;
        sort(sortarr.begin(),sortarr.end());
        unordered_map<int,int>mpp;
        int cnt=1;
        for(int i=0;i<sortarr.size();i++)
        {
            if(!mpp[sortarr[i]]) 
            {
                mpp[sortarr[i]]=cnt;
                cnt++;
            }
        }
        for(int i=0;i<arr.size();i++)
        {
            res[i]=mpp[arr[i]];
        }
        return res;
    }
};