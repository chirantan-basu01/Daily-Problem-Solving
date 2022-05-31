class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(k>s.length() || s.length()<2) 
            return false;
        
        string str ="";
        unordered_set<string> set;
        
        for(int i=0; i<s.length()-k+1; i++){
            string str = s.substr(i,k);
            set.insert(str);
        }
        int permutations = pow(2,k);
        return (set.size()==permutations);
    }
};