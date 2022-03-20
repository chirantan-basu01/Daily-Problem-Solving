class Solution {
public:
    long long count_sub(string text,string pattern){
        long long count = 0,prev = 0;
        
        for(auto ch:text){
            if(ch == pattern[1]){
                count += prev;
            }    
            if(ch == pattern[0]){
                prev++;
            }
        }
        return count;
    }
    
    long long maximumSubsequenceCount(string text, string pattern) {
        string one = pattern[0]+text;
        string two = text+pattern[1];
        
        return max(count_sub(one, pattern), count_sub(two, pattern));
    }
};