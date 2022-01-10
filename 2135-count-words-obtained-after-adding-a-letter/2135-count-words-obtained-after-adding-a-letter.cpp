class Solution {
public:
    unordered_set<string>st;
    
    bool isPossible(string &s){
        int n=s.size();
        for(int i=0;i<n;i++){
            string temp="";
            for(int j=0;j<n;j++){
                if(i==j)
                    continue;
                temp.push_back(s[j]);
            }
            if(st.find(temp)!=st.end()){
                return true;
            }
        }
        return false;
    }
    
    int wordCount(vector<string>& startWords, vector<string>& targetWords) {
        int n=targetWords.size();
        
        for(auto &it:startWords){
            sort(it.begin(),it.end());
            st.insert(it);
        }
        int count=0;
        for(int i=0;i<n;i++){
            sort(targetWords[i].begin(),targetWords[i].end());
            
            if(isPossible(targetWords[i])){
                count++;    
            }
        }
        return count;
    }
};