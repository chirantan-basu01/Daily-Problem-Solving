class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        int n=events.size();
        priority_queue<pair<int,pair<int,int>>>pq;
        sort(begin(events),end(events));
        int ans=0,maxValue=0;
        for(int i=0;i<n;i++){
            while(!pq.empty() and (-1*pq.top().first)<events[i][0]){
                maxValue=max(maxValue,pq.top().second.second);
                pq.pop();
            }
            ans=max(ans,maxValue+events[i][2]);
            pq.push({-1*events[i][1],{events[i][0],events[i][2]}});
        }
        return ans;
    }
};