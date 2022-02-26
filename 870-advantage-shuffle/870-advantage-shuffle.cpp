class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        priority_queue<int,vector<int>,greater<int>>pq;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq2;
        
        for(int i=0;i<n;i++){
            pq.push(nums1[i]);
            pq2.push({nums2[i],i});
        }
        
        vector<int>result(n,-1);
        stack<int>res;
        
        while(!pq.empty() and !pq2.empty()){
            int element=pq2.top().first;
            int index=pq2.top().second;
            pq2.pop();
            
            while(!pq.empty() and pq.top()<=element){
                res.push(pq.top());
                pq.pop();
            }
            
            if(!pq.empty() and pq.top()>element){
                result[index]=pq.top();
                pq.pop();
            }
            else{
                break;
            }
        }
        
        for(int i=0;i<n;i++){
            if(result[i]==-1){
                result[i]=res.top();
                res.pop();
            }
        }
        
        return result;
    }
};