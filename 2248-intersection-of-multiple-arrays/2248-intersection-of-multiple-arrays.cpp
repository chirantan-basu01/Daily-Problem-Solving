class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int>hashmap;
        int n=nums.size();
        
        for(auto elements:nums){
            for(auto element:elements){
                hashmap[element]++;
            }
        }
        
        vector<int>ans;
        for(auto elements:hashmap){
            if(elements.second==n){
                ans.push_back(elements.first);
            }
        }
        
        sort(ans.begin(),ans.end());
        return ans;
    }
};