class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size(), ans = INT_MIN;
        vector<int> prefix(n+1);
        
        prefix[1] = cardPoints[0];
        
        for(int i = 2; i <= n; i++) 
            prefix[i] = prefix[i-1] + cardPoints[i-1];
        
        for(int i = 0; i <= k; i++) {
            int fromStart = prefix[i];
            int fromEnd = prefix[n] - prefix[n - (k-i)];
            ans = max(ans, fromStart + fromEnd);
        }
        
        return ans;
    }
};