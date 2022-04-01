class Solution {
public:
    void reverse(int left,int right,vector<char>&s){
        if(left>=right)
            return;
        
        swap(s[left++],s[right--]);
        reverse(left,right,s);
    }
    
    void reverseString(vector<char>& s) {
        reverse(0,s.size()-1,s);
    }
};