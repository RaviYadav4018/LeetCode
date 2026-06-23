class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>res(A.size(),0);
        int cnt=0;
        vector<int>ans(A.size(),0);

        for(int i=0;i<A.size();i++)
        {
            res[A[i]-1]++;
            if(res[A[i]-1]==2) 
            {
                cnt++;

            }
            res[B[i]-1]++;
            if(res[B[i]-1]==2) 
            {
                cnt++;
            }
            ans[i]=cnt;
        }
        return ans;
    }
};