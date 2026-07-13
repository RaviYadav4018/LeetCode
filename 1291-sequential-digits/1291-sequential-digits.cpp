class Solution {
public:
   

    vector<int> sequentialDigits(int low, int high) {
        vector<int>res;
        string num="123456789";
        int minLen = to_string(low).size();
        int maxLen = to_string(high).size();
        for(int i=minLen;i<=maxLen;i++)
        {
            for(int j=0;j+i<=9;j++)
            {//j=index,i=len
            int nnum =stoi(num.substr(j,i));
            if(nnum>=low&&nnum<=high) res.push_back(nnum);
            }
        }
        return res;
        
    }
};