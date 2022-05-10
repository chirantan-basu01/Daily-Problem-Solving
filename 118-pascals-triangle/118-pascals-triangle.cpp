class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>pscl_trngl(numRows);
        
        for(int i=0;i<numRows;i++){
            pscl_trngl[i].resize(i+1);
            pscl_trngl[i][0]=pscl_trngl[i][i]=1;
            
            for(int j=1;j<i;j++){
                pscl_trngl[i][j]=pscl_trngl[i-1][j-1]+pscl_trngl[i-1][j];
            }
        }
        return pscl_trngl;
    }
};