class Solution {
public:
    bool isPalindrome(string s,int start,int end){
        while(start<=end){
            if(s[start++]!=s[end--]){
                return false;
            }
        }
        return true;
    }
    
    void partition(int currentIdx,vector<string>&path,vector<vector<string>>&ans,string &s){
        if(currentIdx>=s.size()){
            ans.push_back(path);
            return;
        }
        
        for(int i=currentIdx;i<s.size();i++){
            if(isPalindrome(s,currentIdx,i)){
                path.push_back(s.substr(currentIdx,i-currentIdx+1));
                partition(i+1,path,ans,s);
                path.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>path;
        partition(0,path,ans,s);
        return ans;
    }
};