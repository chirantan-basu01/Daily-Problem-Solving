class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>v;
        int i=0;
        string temp="";
        while(i<s.size()){
            if(s[i]==' '){
                v.push_back(temp);
                temp="";
            }
            else
                temp+=s[i];
            i++;
        }
        v.push_back(temp);
        
        if(v.size()!=pattern.size())
            return false;
        
        unordered_map<char,string>mp;
        set<string>st;
        
        for(int i=0;i<v.size();i++){
            if(mp.count(pattern[i])==0 and st.count(v[i])==0){
                mp[pattern[i]]=v[i];
                st.insert(v[i]);
            }
            else if(mp.count(pattern[i])==0 and st.count(v[i])!=0){
                return false;
            }
            else if(mp[pattern[i]]!=v[i]){
                return false;
            }
        }
        return true;
    }
};