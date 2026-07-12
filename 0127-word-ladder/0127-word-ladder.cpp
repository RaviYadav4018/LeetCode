class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
        unordered_set<string>st(wordList.begin(),wordList.end());
        queue<pair<string,int>>q;
        q.push({beginWord,1});
        while(!q.empty())
        {
            string word=q.front().first;
            int dis=q.front().second;
            q.pop();
            if(word==endWord) return dis;
            for(int i=0;i<word.size();i++)
            {
                char ori=word[i];
                for(char ch='a';ch<='z';ch++)
                {
                    word[i]=ch;
                    if(st.count(word)>0)
                    {
                        st.erase(word);
                        q.push({word,dis+1});
                    }
                }
                word[i]=ori;
            }
        }
        return 0;
    }
};