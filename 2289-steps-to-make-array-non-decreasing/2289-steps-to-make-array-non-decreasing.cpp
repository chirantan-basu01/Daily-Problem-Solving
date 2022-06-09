class Solution {
public:
    int totalSteps(vector<int>& nums) {
        int n=nums.size(),ans=0,count;
        stack<pair<int,int>>stk;
        
        stk.push({nums[n-1],0});
        
        for(int i=n-2;i>=0;i--){
            count=0;
            
            while(!stk.empty() and nums[i]>stk.top().first){
                count=max(count+1,stk.top().second);
                stk.pop();
            }
            ans=max(ans,count);
            stk.push({nums[i],count});
        }
        return ans;
    }
};