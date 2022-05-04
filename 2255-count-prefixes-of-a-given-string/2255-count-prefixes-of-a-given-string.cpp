class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int counter=0;
        
        for(int i=0;i<words.size();i++){
            if(words[i]==s.substr(0,words[i].size()))
                counter++;
        }
        
        return counter;
    }
};