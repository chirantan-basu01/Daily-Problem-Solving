class Solution {
public:
    bool check(string s,string pre){
        if(pre.length()>s.length()){
            return false;
        }
        
        for(int i=0;i<pre.length();i++){
            if(pre[i]!=s[i]){
                return false;
            }
        }
        return true;
    }
    
    int prefixCount(vector<string>& words, string pref) {
        int res = 0;
        for(auto s:words){
            
            if(check(s,pref)){
                res++;
            }
        }
        return res;
    }
};