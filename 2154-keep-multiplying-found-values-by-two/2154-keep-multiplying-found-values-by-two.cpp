class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int ans=original;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ans){
                ans=ans*2;
            }
        }
        return ans;
    }
};