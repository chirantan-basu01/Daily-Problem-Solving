class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        nums.resize(2*n);
        
        for(int i=n;i<2*n;i++){
            nums[i]=nums[i-n];
        }
        
        vector<int>res(n,-1);
        stack<int>stk;
        
        for(int i=0;i<2*n;i++){
            int element=nums[i];
            
            while(!stk.empty() and element>nums[stk.top()]){
                if(stk.top()>=n){
                    stk.top()=stk.top()-n;
                }
                res[stk.top()]=element;
                stk.pop();
            }
            
            stk.push(i);
        }
        return res;
    }
};