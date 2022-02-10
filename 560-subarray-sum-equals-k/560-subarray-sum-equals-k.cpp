class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int preSum=0;
        map<int,int>mp;
        int count=0,len=nums.size();
        
        mp[0]=1;
        for(int i=0;i<len;i++){
            preSum+=nums[i];
            count+=mp[preSum-k];
            mp[preSum]++;
        }
        return count;
    }
};