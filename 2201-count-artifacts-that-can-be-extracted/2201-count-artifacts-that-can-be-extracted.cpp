class Solution {
public:
    bool isValid(vector<vector<bool>>&visited,int &start_row,int &start_col,int &end_row,int &end_col){
        
        for(int i=start_row;i<=end_row;i++){
            for(int j=start_col;j<=end_col;j++){
                if(!visited[i][j])
                    return false;
            }    
        }
        return true;
    }
    
    int digArtifacts(int n, vector<vector<int>>& artifacts, vector<vector<int>>& dig) {
        vector<vector<bool>>visited(n,vector<bool>(n,0));
        
        for(int i=0;i<dig.size();i++){
            int row=dig[i][0];
            int col=dig[i][1];
            
            visited[row][col]=1;
        }
        
        int count=0;
        
        for(int i=0;i<artifacts.size();i++){
            
            int start_row=artifacts[i][0];
            int start_col=artifacts[i][1];
            int end_row=artifacts[i][2];
            int end_col=artifacts[i][3];
            
            if(isValid(visited,start_row,start_col,end_row,end_col))
                count++;
        }
        return count;
    }
};