class Solution {
public:
       bool issafe(char store,vector<vector<char>>&board,int row,int col){
        

        for(int i=0;i<9;i++){
            //row check
            if(board[row][i]==store) return false;

            //col check
            if(board[i][col]==store)  return false;

            //box check

            if(board[3*(row/3)+(i/3)][3*(col/3)+(i%3)]==store)
               return false;


        }

        return true;
          
    }
    bool solve(vector<vector<char>> &board){
        for(int i=0;i<9;i++){

            for(int j=0;j<9;j++){

                if(board[i][j]!='.'){
                    char ch=board[i][j];
                    board[i][j]='.';
                    if(issafe(ch,board,i,j)){
                        board[i][j]=ch;
                         continue;
                    }
                    else {
                        return false;
                    }
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        return solve(board);
    }
};