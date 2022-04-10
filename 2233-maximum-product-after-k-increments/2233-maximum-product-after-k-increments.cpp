class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        const int mod=1e9+7;
        
        for(auto it:nums){
            pq.push(it);
        }
        
        while(k--){
            int num=pq.top();
            pq.pop();
            num++;
            pq.push(num);
        }
        
        long long int prod=1;
        while(!pq.empty()){
            int num=pq.top();
            pq.pop();
            prod=((prod%mod)*(num%mod))%mod;
            prod%=mod;
        }
        return prod%mod;
    }
};