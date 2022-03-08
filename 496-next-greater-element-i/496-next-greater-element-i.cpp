class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>ump;
        vector<int>ans;
        stack<int>stk;
        
        int n=nums2.size();
        for(int i=n-1;i>=0;i--){
            while(!stk.empty() and nums2[i]>stk.top())
                stk.pop();
            
            if(stk.empty())
                ump[nums2[i]]=-1;
            else
                ump[nums2[i]]=stk.top();
            
            stk.push(nums2[i]);
        }
        
        for(auto element:nums1)
            ans.push_back(ump[element]);
        
        return ans;
    }
};