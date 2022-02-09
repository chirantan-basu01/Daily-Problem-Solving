class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int ans=0;
        
        for(auto it:nums){
            mp[it]++;
        }
        
        for(auto element:mp){
            if(k==0){
                if(element.second>1)
                    ans++;
            }
            else if(mp.find(element.first+k)!=mp.end()){
                ans++;
            }
        }
        return ans;
    }
};