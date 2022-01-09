class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        sudokuSolver(board,0,0);
    }
    
    bool sudokuSolver(vector<vector<char>>& board,int row,int col){
        if(row==9)
            return true;
        int nextRow,nextCol;
        if(col==8){
            nextRow=row+1;
            nextCol=0;
        }
        else{
            nextRow=row;
            nextCol=col+1;
        }
        if(board[row][col]!='.')
            return sudokuSolver(board,nextRow,nextCol);
        
        for(int currentVal=1;currentVal<10;currentVal++){
            if(isValid(board,row,col,currentVal)){
                board[row][col]=char(currentVal+'0');
                if(sudokuSolver(board,nextRow,nextCol))
                    return true;
                else
                    board[row][col]='.';
            }
        }
        return false;
    }
    
    bool isValid(vector<vector<char>>& board,int row,int col,int currentVal){
        //row check
            for(int i=0;i<9;i++){
                if(board[row][i]==char(currentVal+'0'))
                    return false;
            }    
        
        //col check
        for(int i=0;i<9;i++){
            if(board[i][col]==char(currentVal+'0'))
                return false;
        }
        
        //sub-grid check
        int startRow=3*(row/3);
        int startCol=3*(col/3);
        
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[startRow+i][startCol+j]==char(currentVal+'0'))
                    return false;
            }
        }
        return true;
    }
};