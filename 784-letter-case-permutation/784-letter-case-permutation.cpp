class Solution {
public:
    void backtrack(string currentVal,int currentIdx,string &s,vector<string>&ans){
        //base condition
        if(currentIdx==s.size()){
            ans.push_back(currentVal);
            return;
        }
        
        //digit
        if(isdigit(s[currentIdx])){
            currentVal.push_back(s[currentIdx]);
            backtrack(currentVal,currentIdx+1,s,ans);
        }
        else{
            //lowercase
            string str1=currentVal;
            str1.push_back(tolower(s[currentIdx]));
            backtrack(str1,currentIdx+1,s,ans);
            
            //uppercase
            string str2=currentVal;
            str2.push_back(toupper(s[currentIdx]));
            backtrack(str2,currentIdx+1,s,ans);
        }
    }
    
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        backtrack("",0,s,ans);
        return ans;
    }
};