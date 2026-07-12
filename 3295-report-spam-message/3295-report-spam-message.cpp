class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        unordered_set<string>st(bannedWords.begin(),bannedWords.end());
        int cnt=0;
        for(int i=0;i<message.size();i++)
        {
            if(st.count(message[i])>0)
            {
                cnt++;
                if(cnt>=2) return true;
            }


        }
        return false;
    }
};