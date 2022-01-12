class Solution {
public:
    void generateStrings(int currentIdx,string currentStr,string digits,unordered_map<char,string>&mp,vector<string>&ans){
        if(currentIdx>=digits.size()){
            ans.push_back(currentStr);
            return;
        }
        
        char currChar=digits[currentIdx];
        string mappings=mp[currChar];
        
        for(int i=0;i<mappings.size();i++){
            generateStrings(currentIdx+1,currentStr+mappings[i],digits,mp,ans);
        }
        return;
    }
    
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string>mp{
            {'1', ""}, 
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"},
          };
        vector<string>ans;
        
        if(digits.size()==0)
            return ans;
        
        generateStrings(0,"",digits,mp,ans);
        return ans;
    }
};