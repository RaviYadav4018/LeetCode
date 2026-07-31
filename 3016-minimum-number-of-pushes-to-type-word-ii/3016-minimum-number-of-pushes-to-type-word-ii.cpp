class Solution {
public:
    int minimumPushes(string word) {
        
        int cnt=0;
        int ans=0;
        vector<int>mpp(26,0);
        for(int i=0;i<word.size();i++)
        {
          mpp[word[i]-'a']++;
        }
        sort(mpp.rbegin(),mpp.rend());

       for(int i=0;i<26;i++)
       {
        int click=i/8+1;
        int size=mpp[i];
        ans+=size*click;
       }
      
     return ans;
        
    }
};