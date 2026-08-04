class Solution {
public:
  
    string getPermutation(int n, int k) {
        int fact=1;
        vector<int>dig;
        for(int i=1;i<n;i++)
        {
            fact*=i;
            dig.push_back(i);
        }
        dig.push_back(n);
        string res="";
        k=k-1;
        while(true)
        {
            res=res+to_string(dig[k/fact]);
            dig.erase(dig.begin()+k/fact);
            if(dig.size()==0) break;
            k=k%fact;
            fact=fact/dig.size();
        }
        return res;
    }
};