class Solution {
public:
    void permutations(int currentIdx,vector<vector<int>>&ans,vector<int>&nums){
        if(currentIdx==nums.size()){
            ans.push_back(nums);
            return;
        }
        
        for(int i=currentIdx;i<nums.size();i++){
            swap(nums[currentIdx],nums[i]);
            permutations(currentIdx+1,ans,nums);
            swap(nums[currentIdx],nums[i]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        permutations(0,ans,nums);
        return ans;
    }
};