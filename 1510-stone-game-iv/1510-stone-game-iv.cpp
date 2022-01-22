class Solution {
public:
    bool winnerSquareGame(int n) {
        vector<bool>dp(n+1,false);
        
         for(int stones = 1; stones <= n; stones++) {
            for(int remove = sqrt(stones); remove >= 1; remove--) {
                if(!dp[stones - (remove * remove)]) {
                    dp[stones] = true;
                    break;
                }
            }
        }
        return dp[n];
    }
};