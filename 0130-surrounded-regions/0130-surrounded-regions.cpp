class Solution {
public:
    void dfs(vector<vector<char>>& board,vector<vector<int>>& vis,int row,int col,vector<int>&delrow,vector<int>&delcol)
    {
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<4;i++)
        {
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];
                if(nrow>=0&&nrow<m&&ncol>=0&&ncol<n&&board[nrow][ncol]=='O'&&vis[nrow][ncol]!=1)
                {
                    vis[nrow][ncol]=1;
                    dfs(board,vis,nrow,ncol,delrow,delcol);
                    
                }
        }

    }
    void solve(vector<vector<char>>& board) {
        
        int m=board.size();
        int n=board[0].size();
         vector<int>delrow={0,-1,0,1};
         vector<int>delcol={-1,0,1,0};
        queue<pair<int,int>>q;
        vector<vector<int>>vis(m,vector<int>(n,0));
        //col 0 ,3
        for(int i=0;i<m;i++)
        {
            if(board[i][0]=='O')
            {
                vis[i][0]=1;
                dfs(board,vis,i,0,delrow,delcol);
            }
            if(board[i][n-1]=='O')
            {
                 vis[i][n-1]=1;
                dfs(board,vis,i,n-1,delrow,delcol);
            }
        }
        //row 0,3
         for(int i=0;i<n;i++)
        {
            if(board[0][i]=='O')
            {
                vis[0][i]=1;
                dfs(board,vis,0,i,delrow,delcol);
            }
            if(board[m-1][i]=='O')
            {
                 vis[m-1][i]=1;
                dfs(board,vis,m-1,i,delrow,delcol);
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]=='O'&&vis[i][j]==0)
                {
                    board[i][j]='X';
                }
            }
        }
       
    }
};