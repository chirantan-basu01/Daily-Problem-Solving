class Solution {
public:
    int countElements(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX,maxi=INT_MIN;
        
        for(auto it:nums){
            mini=min(mini,it);
            maxi=max(maxi,it);
        }
        
        int ans=0;
        for(auto it:nums){
            if(it>mini and it<maxi)
                ans++;
        }
        return ans;
    }
};