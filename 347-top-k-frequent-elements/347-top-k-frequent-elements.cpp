class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>ump;
        for(auto it:nums){
            ump[it]++;
        }
        vector<int>ans;
        priority_queue<pair<int,int>>pq;
        for(auto it:ump){
            pq.push(make_pair(it.second,it.first));
            if(pq.size()>ump.size()-k){
                ans.push_back(pq.top().second);
                pq.pop();
            }
        }
        return ans;
    }
};