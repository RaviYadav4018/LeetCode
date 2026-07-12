class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>res;
        for(int i=0;i<words.size();i++)
        {
            int n=words[i].size();
            string wor=words[i];
            for(int j=0;j<n;j++)
            {
                if(wor[j]==x)
                {
                    res.push_back(i);
                    break;
                }
            }
        }
        return res;
        
    }
};