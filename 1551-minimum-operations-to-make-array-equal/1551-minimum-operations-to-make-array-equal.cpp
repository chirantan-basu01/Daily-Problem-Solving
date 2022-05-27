class Solution {
public:
    int minOperations(int n) {
        
        // 2 * ((n - 2) / 2) * ((n - 2) / 2 + 1) / 2 + n / 2
        //n^2/4
        
        long long int ans = (n*n)/4;
        return ans;
    }
};