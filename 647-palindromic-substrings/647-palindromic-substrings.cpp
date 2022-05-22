class Solution {
public:
    bool helper(string &s,int i,int j,vector<vector<int>>&dp){
        if(i>=j)
            return true;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(s[i]==s[j]){
            dp[i][j]=helper(s,i+1,j-1,dp);
        }
        else
            dp[i][j]=false;
        
        return dp[i][j];
    }
    
    int countSubstrings(string s) {
        int n=s.size();int count=0;
        vector<vector<int>>dp(n,vector<int>(n,-1));
        
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(helper(s,i,j,dp)){
                    count++;
                }
            }
        }
        return count;
    }
};