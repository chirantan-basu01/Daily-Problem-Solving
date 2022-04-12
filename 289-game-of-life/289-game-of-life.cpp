class Solution {
public:
    void check(vector<vector<int>>& board,int i,int j,int a,int b){
        int m=board.size();
        int n=board[0].size();
        
        if(a>=m or b<0 or b>=n)
            return;
        
        if(board[i][j]%2!=0)
            board[a][b]+=2;
        if(board[a][b]%2!=0)
            board[i][j]+=2;
    }
    
    void gameOfLife(vector<vector<int>>& board) {
        int m=board.size();
        int n=board[0].size();
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                check(board,i,j,i+1,j-1);
                check(board,i,j,i+1,j);
                check(board,i,j,i+1,j+1);
                check(board,i,j,i,j+1);
                
                if(board[i][j]>=5 and board[i][j]<=7)
                    board[i][j]=1;
                else
                    board[i][j]=0;
            }
        }
    }
};