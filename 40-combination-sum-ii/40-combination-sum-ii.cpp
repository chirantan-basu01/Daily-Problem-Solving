class Solution {
public:
    void totalWays(int currentIdx,vector<int>&combinations,vector<vector<int>>&ans,vector<int>&candidates,int target){
        if(target==0){
            ans.push_back(combinations);
            return;
        }
        
        for(int i=currentIdx;i<candidates.size();i++){
            if(i>currentIdx and candidates[i]==candidates[i-1])
                continue;
            if(candidates[i]>target)
                break;
            combinations.push_back(candidates[i]);
            totalWays(i+1,combinations,ans,candidates,target-candidates[i]);
            combinations.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>combinations;
        totalWays(0,combinations,ans,candidates,target);
        return ans;
    }
};