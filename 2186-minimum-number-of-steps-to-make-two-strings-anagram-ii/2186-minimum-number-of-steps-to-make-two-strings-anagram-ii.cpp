class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>mp;
        int ans=0;
        
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            mp[t[i]]--;
        }
        
        for(auto element:mp){
            ans+=abs(element.second);
        }
        return ans;
    }
};