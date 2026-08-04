class Solution {
public:
    bool checkword(int row,int col,vector<vector<char>>&board,string word,vector<vector<int>>&vis,int x,vector<int>&delr,vector<int>&delc)
    {
        if(x==word.size()) return true;
        int n=board.size();
        int m=board[0].size();

        for(int i=0;i<4;i++)
        {
            int nrow=row+delr[i];
            int ncol=col+delc[i];
            if(nrow>=0&&ncol>=0&&nrow<n&&ncol<m&&vis[nrow][ncol]==0&&board[nrow][ncol]==word[x])
            {
                vis[nrow][ncol]=1;
                if(checkword(nrow,ncol,board,word,vis,x+1,delr,delc)) return true;
                vis[nrow][ncol]=0;
            }

        }
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        unordered_map<char,vector<pair<int,int>>>mpp;
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>>vis(n,vector<int>(m));
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                vis[i][j]=0;
               mpp[board[i][j]].push_back({i,j});
            }
            
        }
        if(mpp.find(word[0])==mpp.end()) return false;
        vector<int>delr={-1,1,0,0};
        vector<int>delc={0,0,1,-1};
        for(auto it:mpp[word[0]])
        {
            int row=it.first;
            int col=it.second;
            vis[row][col]=1;
            if(checkword(row,col,board,word,vis,1,delr,delc)) return true;
            vis[row][col]=0;
        }
        return false;
    }
    
};