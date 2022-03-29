class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        priority_queue<pair<int,int>>pq;
        for(auto element:mp){
            pq.push({-element.second,element.first});
        }
        
        vector<int>result;
        while(!pq.empty()){
            auto x=pq.top().first;
            for(int i=0;i<abs(x);i++){
                result.push_back(pq.top().second);
            }
            pq.pop();
        }
        return result;
    }
};