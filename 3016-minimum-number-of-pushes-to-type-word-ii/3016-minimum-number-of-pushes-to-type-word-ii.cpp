class Solution {
public:
    int minimumPushes(string word) {
        
        int cnt=0;
        int ans=0;
        unordered_map<char,int>mpp;
        for(int i=0;i<word.size();i++)
        {
          mpp[word[i]]++;
        }
        priority_queue<int>pq;

        for(char ch='a';ch<='z';ch++)
        {
           if(mpp[ch]!=0)
           {
            pq.push(mpp[ch]);
           }
        }
       while(!pq.empty())
       {
       int s=pq.top();
        pq.pop();
        
        
           
                if(cnt<8)
                {   
                    ans+=s*1;   
                }
                else if(cnt<16)
                {   
                    ans+=s*2;
                }
                else if(cnt<24)
                {
                    ans+=s*3;
                }
                else
                {
                    ans+=s*4; 
                }
                cnt++;    
        }
        return ans;
        
    }
};