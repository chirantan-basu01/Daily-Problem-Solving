class Solution {
public:
    int totalSteps(vector<int>& nums) {
        vector<int> maxEats(nums.size());
        stack<int>stk;
        int step=0;
        
        for(int i=nums.size()-1;i>=0;i--){
            while(!stk.empty() and nums[i]>nums[stk.top()]){
                maxEats[i]=max(maxEats[i]+1,maxEats[stk.top()]);
                stk.pop();
            }
            stk.push(i);
            step=max(step,maxEats[i]);
        }
        return step;
    }
};