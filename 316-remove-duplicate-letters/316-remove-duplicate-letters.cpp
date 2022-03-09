class Solution {
public:
    string removeDuplicateLetters(string s) {
        map<char,int>count,used;
        string ans="";
        for(auto ch:s){
            count[ch]++;
        }
        
        for(auto ch:s){
            count[ch]--;
            
            if(used[ch]==0){
            /* if last char of ans > c and also it's count > 0 then it means
            it is present afterwards as well and to make answer lexographically
            smallest, we can ignore this for now and add it later on */
                while(!ans.empty() and ans.back()>ch and count[ans.back()]){
                    // this denotes we have to use it in answer afterwards
                    used[ans.back()]=0;
                    ans.pop_back();
                }
                ans+=ch;
                used[ch]=1;
            }
        }
        return ans;
    }
};