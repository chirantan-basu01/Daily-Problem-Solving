class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int ans=0;
        for(auto element:mp){
            if(element.second%2!=0){
                ans++;
            }
        }
        if(ans>1){
            return s.size()-ans+1;
        }
        return s.size();
    }
};