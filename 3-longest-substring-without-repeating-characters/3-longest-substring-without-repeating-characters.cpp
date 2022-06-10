class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,ans=0,n=s.size();
        unordered_set<int>st;
        
        while(i<n and j<n){
            if(st.find(s[j])==st.end()){
                st.insert(s[j++]);
                ans=max(ans,j-i);
            }
            else{
                st.erase(s[i++]);
            }
        }
        return ans;
    }
};