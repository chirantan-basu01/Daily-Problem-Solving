class Solution {
public:
    void validBrackets(string &s,int curr_idx,int left_remove,int right_remove,int pair,string path,
                       unordered_set<string>&result){
        
        if(curr_idx==s.size()){
            if(left_remove==0 and right_remove==0 and pair==0){
                result.insert(path);
            }
            return;
        }
        if(s[curr_idx]!='(' and s[curr_idx]!=')'){
            validBrackets(s,curr_idx+1,left_remove,right_remove,pair,path+s[curr_idx],result);
        }
        else{
            if(s[curr_idx]=='('){
                if(left_remove>0){
                    validBrackets(s,curr_idx+1,left_remove-1,right_remove,pair,path,result);
                }
                validBrackets(s,curr_idx+1,left_remove,right_remove,pair+1,path+s[curr_idx],result);
            }
            if(s[curr_idx]==')'){
                if(right_remove>0){
                    validBrackets(s,curr_idx+1,left_remove,right_remove-1,pair,path,result);
                }
                if(pair>0){
                    validBrackets(s,curr_idx+1,left_remove,right_remove,pair-1,path+s[curr_idx],result);
                }
            }
        }
    }
    
    vector<string> removeInvalidParentheses(string s) {
        unordered_set<string>result;
        int left_remove=0;
        int right_remove=0;
        
        for(auto ch:s){
            if(ch=='(')
                left_remove++;
            
            if(ch==')'){
                if(left_remove!=0){
                    left_remove--;
                }
                else{
                    right_remove++;
                }
            }
        }
        validBrackets(s,0,left_remove,right_remove,0,"",result);
        return vector<string>(result.begin(),result.end());
    }
};