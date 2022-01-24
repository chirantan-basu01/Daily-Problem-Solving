class Solution {
public:
    bool detectCapitalUse(string word) {
        bool firstCaps=isupper(word[0]),allCaps=true,allSmall=true;
        
        for(int i=1;i<word.size();i++){
            if(isupper(word[i])){
                allSmall=false;
            }
            else{
                allCaps=false;
            }
        }
        
        if((firstCaps && allCaps) || allSmall){
            return true;
        }
        else{
            return false;
        }
    }
};
