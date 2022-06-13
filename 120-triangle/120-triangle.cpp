class Solution {
public:
    int minTotal(vector<vector<int>>& triangle,int height,int current_idx,vector<vector<int>>& dp){
        if(height==triangle.size())
            return 0;
        
        if(dp[height][current_idx]!=-1)
            return dp[height][current_idx];
        
        return dp[height][current_idx]=triangle[height][current_idx]+
            min(minTotal(triangle,height+1,current_idx,dp),minTotal(triangle,height+1,current_idx+1,dp));
    }
    
    int minimumTotal(vector<vector<int>>& triangle) {
        int m=triangle.size(),n;
        n=m;
    
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return minTotal(triangle,0,0,dp);
    }
};