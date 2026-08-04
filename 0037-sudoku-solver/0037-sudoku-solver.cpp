class Solution {
public:
     bool ispossible(int row,int col,vector<vector<char>>& board,char ch)
     {
        for(int i=0;i<board.size();i++)
        {
            if(board[row][i]==ch) return false;
            if(board[i][col]==ch) return false;
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==ch) return false;

        }
        return true;
     }
     bool sudoku(vector<vector<char>>& board)
     {
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]=='.')
                {
                     for(char ch='1';ch<='9';ch++)
                    {
                       if(ispossible(i,j,board,ch))
                         {
                            board[i][j]=ch;
                            if(sudoku(board)) return true;
                            else board[i][j]='.';
                         }
                     }
                    return false;
                }
            }
        }
        return true;
     }
    void solveSudoku(vector<vector<char>>& board) {
        
        sudoku(board);
        
    }
};