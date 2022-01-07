class Solution {
public:
    bool areDiagValid(int currRow,int currCol,vector<vector<char>>&grid,int n){
        int i=currRow;
        int j=currCol;
        
        while(i>=0 and j>=0){ //top left diagonal
            if(grid[i][j]=='Q')
                return false;
            i--;
            j--;
        }
        
        i=currRow;
        j=currCol;
        
        while(i>=0 and j<n){ //top right diagonal
            if(grid[i][j]=='Q')
                return false;
            i--;
            j++;
        }
        
        i=currRow;
        j=currCol;
        
        while(i<n and j>=0){ //bottom left diagonal
            if(grid[i][j]=='Q')
                return false;
            i++;
            j--;
        }
        
        i=currRow;
        j=currCol;
        while(i<n and j<n){ //bottom right diagonal
            if(grid[i][j]=='Q')
                return false;
            i++;
            j++;
        }
        return true;
    }
    
    bool isColValid(int currCol,vector<vector<char>>&grid,int n){
        for(int i=0;i<n;i++){
            if(grid[i][currCol]=='Q')
                return false;
        }
        return true;
    }
    
    bool isRowValid(int currRow,vector<vector<char>>&grid,int n){
        for(int i=0;i<n;i++){
            if(grid[currRow][i]=='Q')
                return false;
        }
        return true;
    }
    
    bool isValid(int currRow,int currCol,vector<vector<char>>&grid,int n){
        return isColValid(currCol,grid,n) and isRowValid(currRow,grid,n) and areDiagValid(currRow,currCol,grid,n);
    }
    
    vector<string>populate(vector<vector<char>>&grid,int n){
        vector<string>vec;
        
        for(int curr_row=0;curr_row<n;curr_row++){
            string temp="";
            for(int curr_col=0;curr_col<n;curr_col++){
                temp+=grid[curr_row][curr_col];
            }
            vec.push_back(temp);
        }
        return vec;
    }
    
    void nQueens(int currRow,vector<vector<char>>&grid,vector<vector<string>>&ans,int n){
        if(currRow==n){
            vector<string>tempAns=populate(grid,n);
            ans.push_back(tempAns);
            return;
        }
        for(int currCol=0;currCol<n;currCol++){
            if(isValid(currRow,currCol,grid,n)){
                grid[currRow][currCol]='Q';
                nQueens(currRow+1,grid,ans,n);
                grid[currRow][currCol]='.'; // undoing the change and replacing it with dot
            }
        }
        return;
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<vector<char>>grid(n,vector<char>(n,'.'));
        nQueens(0,grid,ans,n);
        return ans;
        
    }
};
