class Solution {
public:
    int removePalindromeSub(string s) {
        string rev_str=s;
        
        if(s.size()==0)
            return 0;
        
        reverse(rev_str.begin(),rev_str.end());
        
        if(s==rev_str)
            return 1;
        else
            return 2;
    }
};