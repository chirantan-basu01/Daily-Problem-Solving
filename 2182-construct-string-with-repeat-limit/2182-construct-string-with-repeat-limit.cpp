class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        int n=s.size();
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        
        priority_queue<pair<char,int>>pq;
        for(auto it:mp){
            pq.push({it.first,it.second});
        }
        string ans="";
        while(!pq.empty()){
            char c1=pq.top().first;
            int n1=pq.top().second;
            pq.pop();
            
            int len=min(repeatLimit,n1);
            for(int i=0;i<len;i++){
                ans+=c1;
            }
            char c2;
            int n2=0;
            
            if(n1-len>0){
                if(!pq.empty()){
                    c2=pq.top().first;
                    n2=pq.top().second;
                    pq.pop();
                }
                else{
                    return ans;
                }
                ans+=c2;
                pq.push({c1,n1-len});
                if(n2-1>0){
                    pq.push({c2,n2-1});
                }
            }
        }
        return ans;
    }
};