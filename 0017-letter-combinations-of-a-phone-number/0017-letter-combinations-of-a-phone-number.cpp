class Solution {
public:
    void comb(int ind,string digits,vector<vector<char>> &dig,vector<string>&res,string &ans)
    {
        if(ind==digits.size())
        {
            res.push_back(ans);
            return;
        }
        for(auto it : dig[digits[ind]-'0'])
        {
            ans.push_back(it);
            comb(ind+1,digits,dig,res,ans);
            ans.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {
        vector<vector<char>> dig(10);

        dig[2] = {'a', 'b', 'c'};
        dig[3] = {'d', 'e', 'f'};
        dig[4] = {'g', 'h', 'i'};
        dig[5] = {'j', 'k', 'l'};
        dig[6] = {'m', 'n', 'o'};
        dig[7] = {'p', 'q', 'r', 's'};
        dig[8] = {'t', 'u', 'v'};
        dig[9] = {'w', 'x', 'y', 'z'};
        vector<string>res;
        string ans="";
         comb(0,digits,dig,res,ans);

        return res;
    }
};