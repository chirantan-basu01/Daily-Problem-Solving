class Solution {
public:
    bool digitCount(string num) {
        map<int,int>mp;
        
        for(auto element:num){
            int x=element-'0';
            mp[x]++;
        }
        
        for(int i=0;i<num.size();i++){
            int x=num[i]-'0';
            if(mp[i]!=x)
                return false;
        }
        return true;
    }
};