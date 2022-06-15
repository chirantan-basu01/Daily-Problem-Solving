class Solution {
public:
    int longestStrChain(vector<string>& words) {
        
        //sorting the words acc to the lenghts in asc
        sort(words.begin(), words.end(), [](const string& first, const string& second) {
            return first.size() < second.size();
        });
        
        map<string, int> mp;
        int res = 0;
        
        for(string word : words) {
            int longest = 0;
            
            for(int i = 0; i < word.size(); i++) {
                string sub = word.substr(0, i) + word.substr(i + 1,word.size() + 1);
                longest = max(longest, mp[sub] + 1);
            }
            mp[word] = longest;
            res = max(res, longest);
        }
        return res;
    }
};