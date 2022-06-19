class Solution {
public:
    string greatestLetter(string s) {
        vector<bool>lowercase(26),uppercase(26);
        string ans="";
        
        for(auto ch:s){
            if(ch>='A' and ch<='Z')
                uppercase[ch-'A']=true;
            else
                lowercase[ch-'a']=true;
        }
        
        for(int i=25;i>=0;i--){
            if(uppercase[i] and lowercase[i]){
                ans+= i+'A';
                break;
            }
        }
        return ans;
    }
};