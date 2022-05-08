class Solution {
public:
    string largestGoodInteger(string nums) {
        string ans;
        
        for(int i=0;i+2<nums.size();i++) {
            if(nums[i]==nums[i+1] and nums[i+1]==nums[i+2])
                ans=max(ans,{nums[i],nums[i+1],nums[i+2]});
        }
        return ans;
    }
};