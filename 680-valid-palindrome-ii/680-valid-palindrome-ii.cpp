class Solution {
public:
    bool solve(string &s, int low,int high,int count){
        if(count>1)
            return false;
        
        while(low<high){
            if(s[low]==s[high]){
                low++,high--;
            }    
            else{
                return solve(s,low+1,high,count+1)||solve(s,low,high-1,count+1);
            }
        }
        
        return true;
    }
    
    
    bool validPalindrome(string s) {
        int low=0,high=s.size()-1;
        
        return solve(s,low,high,0);
    }
};