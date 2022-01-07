class Solution {
public:
    void generateAllSubsets(int currentIndex,vector<int>&nums,vector<vector<int>>&powerSet,vector<int>&temp){
        
        for(int i=currentIndex;i<nums.size();i++){
            if(i>currentIndex and nums[i]==nums[i-1])
                continue;
            temp.push_back(nums[i]);
            powerSet.push_back(temp);
            generateAllSubsets(i+1,nums,powerSet,temp);   
            temp.pop_back();
        }    
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>powerSet={{}};
        vector<int>temp;
        sort(nums.begin(),nums.end());
        generateAllSubsets(0,nums,powerSet,temp);
        return powerSet;
    }
};