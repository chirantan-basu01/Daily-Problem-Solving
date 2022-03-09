class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        
        int start=0;
        int end=m*n-1;
        
        while(start<=end){
            int mid=(start+end)/2;
            
            int currRow=mid/n;
            int currCol=mid%n;
            
            if(matrix[currRow][currCol]==target)
                return 1;
            if(matrix[currRow][currCol]<target)
                start=mid+1;
            else
                end=mid-1;
        }
        return 0;
    }
};