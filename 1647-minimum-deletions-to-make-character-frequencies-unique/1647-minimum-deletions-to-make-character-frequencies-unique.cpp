class Solution {
public:
    int minDeletions(string s) {
        vector<int>v(26);
        
        for(auto ch:s){
            v[ch-'a']++;
        }
        
        sort(v.begin(),v.end(),greater<int>());
        
        int ans=0;
        int max_allotted_freq=v[0];
        
        for(auto ch:v){
            if(ch>max_allotted_freq){
                if(max_allotted_freq>0)
                    ans+=ch-max_allotted_freq;
                else
                    ans+=ch;
            }
            max_allotted_freq=min(max_allotted_freq-1,ch-1);
        }
        return ans;
    }
};