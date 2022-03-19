class Solution {
public:
    int halveArray(vector<int>& nums) {
        double sum=0;
        
        for(auto element:nums){
            sum+=element;    
        }
        priority_queue<double>pq;
        
        for(auto element:nums){
            pq.push(element);
        }
        double ans=sum;
        int result=0;
        
        while(sum>ans/2.0){
            result++;
            double top=pq.top();
            pq.pop();
            sum-=top/2.0;
            top=top/2.0;
            pq.push(top);
        }
        return result;
    }
};