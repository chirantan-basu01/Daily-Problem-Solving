class Solution {
public:
    int steps(string word1,string word2,int i,int j,vector<vector<int>>&dp){
        if(i==word1.size() and j==word2.size())
            return 0;
        if(i==word1.size() || j==word2.size())
            return max(word1.size()-i,word2.size()-j);
        
                    
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        if(word1[i]==word2[j])
            return steps(word1,word2,i+1,j+1,dp);
        
        return dp[i][j]=1+min(steps(word1,word2,i+1,j,dp),steps(word1,word2,i,j+1,dp));
    }
    
    int minDistance(string word1, string word2) {
        int n=word1.size(),m=word2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return steps(word1,word2,0,0,dp);
    }
};