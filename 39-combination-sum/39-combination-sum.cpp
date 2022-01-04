class Solution {
public:
    void totalWays(vector<int>&candidates,int currentIdx,int target,vector<int>&temp,vector<vector<int>>&ans){
        if(currentIdx==candidates.size()){
            if(target==0)
                ans.push_back(temp);
            return;
        }
        if(target>=candidates[currentIdx]){
            temp.push_back(candidates[currentIdx]);
            totalWays(candidates,currentIdx,target-candidates[currentIdx],temp,ans);
            temp.pop_back();
        }
        totalWays(candidates,currentIdx+1,target,temp,ans);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        totalWays(candidates,0,target,temp,ans);
        return ans;
    }
};