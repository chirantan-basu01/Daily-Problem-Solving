class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        int ans=INT_MAX;
        long long sum=0;
        
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            
            if(sum>=k){
                ans=min(ans,i+1);    
            }
            
            while(pq.size() and sum-pq.top().first>=k){
                auto &p=pq.top();
                ans=min(ans,i-p.second);
                pq.pop();
            }
            
            pq.push({sum,i});
        }
        
        if(ans==INT_MAX)
            return -1;
        else
            return ans;
    }
};