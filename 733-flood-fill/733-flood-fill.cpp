class Solution {
public:
    vector<vector<int>>floodFill(vector<vector<int>>&grid, int sr, int sc, int newColor) {
        if(grid[sr][sc]==newColor)
            return grid;
        
        DFS(grid,sr,sc,grid[sr][sc],grid.size(),grid[0].size(),newColor);
        return grid;
    }
    
private:
    void DFS(vector<vector<int>>&grid, int currentRow, int currentCol, 
             int color, int m, int n, int &newColor){
        
        if(currentRow<0 || currentCol<0 || currentRow>=m || currentCol>=n || 
           grid[currentRow][currentCol]!=color)
            return;
        
        grid[currentRow][currentCol]=newColor;
        
        DFS(grid,currentRow+1,currentCol,color,m,n,newColor);
        DFS(grid,currentRow,currentCol+1,color,m,n,newColor);
        DFS(grid,currentRow-1,currentCol,color,m,n,newColor);
        DFS(grid,currentRow,currentCol-1,color,m,n,newColor);
        
        return;
    }
};