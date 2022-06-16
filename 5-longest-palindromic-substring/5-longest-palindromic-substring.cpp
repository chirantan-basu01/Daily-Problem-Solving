class Solution {
public:
    bool helper(int l, int r, string &s, int memo[][1001], vector<int> &answer) {
        if (memo[l][r] != -1) {
            return memo[l][r];         
        }
        if (l >= r) {
            return true;
        }
        bool found = false;
        if (s[l] == s[r]) {
            found = true && helper(l + 1, r - 1, s, memo, answer);
        }
        helper(l + 1, r , s, memo, answer);
        helper(l, r - 1, s, memo, answer);
        
        if (found && (r - l + 1) > answer[2]) {
            answer = {l, r, (r - l + 1)};
        }
        
        memo[l][r] = found;
        return found;
    }
    
    string longestPalindrome(string s) {
        int memo[1001][1001];
        memset(memo, -1, sizeof(memo));
        vector<int> answer = {0, 0, 1};
        helper(0, s.size() - 1, s, memo, answer);
        return s.substr(answer[0], answer[2]);
    }
};