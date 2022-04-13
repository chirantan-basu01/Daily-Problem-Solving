class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>matrix(n,vector<int>(n));
        
        int rowStart=0,rowEnd=n-1;
        int colStart=0,colEnd=n-1;
        int value=1;
        
        while(rowStart<=rowEnd and colStart<=colEnd){
            
            for(int i=colStart;i<=colEnd;i++)
                matrix[rowStart][i]=value++;
            rowStart++;
            
            for(int i=rowStart;i<=rowEnd;i++)
                matrix[i][colEnd]=value++;
            colEnd--;
            
            for(int i=colEnd;i>=colStart;i--)
                matrix[rowEnd][i]=value++;
            rowEnd--;
            
            for(int i=rowEnd;i>=rowStart;i--)
                matrix[i][colStart]=value++;
            colStart++;
        }
        return matrix;
    }
};