class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        
        for(int currentRow=0;currentRow<m;currentRow++){
            for(int currentCol=0;currentCol<n;currentCol++){
                if(grid[currentRow][currentCol]=='1'){
                    ans++;
                    DFS(grid,currentRow,currentCol,m,n);
                }
            }
        }
        return ans;
    }
private:
    void DFS(vector<vector<char>>&grid,int currentRow,int currentCol,int m,int n){
        
        if(currentRow<0 || currentCol<0 || currentRow>=m || currentCol>=n ||
           grid[currentRow][currentCol]=='0')
            return;
        
        grid[currentRow][currentCol]='0';
        
        DFS(grid,currentRow-1,currentCol,m,n);
        DFS(grid,currentRow,currentCol+1,m,n);
        DFS(grid,currentRow+1,currentCol,m,n);
        DFS(grid,currentRow,currentCol-1,m,n);
        
        return;
    }
};