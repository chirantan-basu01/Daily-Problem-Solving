class Solution {
public:
    char findTheDifference(string s, string t) {
        int s_sum=0;
        int t_sum=0;
        
        for(auto ch:s)
            s_sum+=ch;
        
        for(auto ch:t)
            t_sum+=ch;
        
        return t_sum-s_sum;
    }
};