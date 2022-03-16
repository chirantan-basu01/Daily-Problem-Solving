class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        priority_queue<pair<int,int>>pq;
        
        for(int i=0;i<k;i++){
            pq.push({nums[i],i});
        }
        ans.push_back(pq.top().first);
        
        for(int i=k;i<nums.size();i++){
            pq.push({nums[i],i});
            
            // remove all the elments which are not in the current window
            // current window is from [i-k+1 , i]
            while(!(pq.top().second>i-k))
                pq.pop();
            
            ans.push_back(pq.top().first);
        }
        return ans;
    }
};