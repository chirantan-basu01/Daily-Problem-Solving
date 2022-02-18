class Solution {
public:
    string truncateSentence(string s, int k) {
        string result="";
        int words=0;
        
        for(auto ch:s){
            if(ch==' ')
                words++;
            if(words<k)
                result+=ch;
        }
        return result;
    }
};