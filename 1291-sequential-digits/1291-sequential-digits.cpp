class Solution {
public:
   

    vector<int> sequentialDigits(int low, int high) {
        vector<int>res;
        string num="123456789";
        for(int i=2;i<=9;i++)
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