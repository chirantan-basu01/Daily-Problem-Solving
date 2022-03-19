class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int>mp;
        
        if(nums.size()%2!=0)
            return false;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int size=nums.size()/2;
        
        for(auto element:mp){
            if(element.second%2!=0)
                return false;
        }
        
        return true;
    }
};