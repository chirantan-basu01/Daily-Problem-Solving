class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        
        for(auto element:arr){
            mp[element]++;
        }
        
        vector<int>ans;
        for(auto element:mp){
            ans.push_back(element.second);
        }
        
        set<int>st(ans.begin(),ans.end());
        
        int setSize=st.size();
        int mapSize=mp.size();
        
        if(setSize==mapSize)
            return true;
        return false;
    }
};