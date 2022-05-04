class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans=0,n=nums.size(),i=0,j=n-1;
        
        while(i<j){
            if(nums[i]+nums[j]==k){
                ans++,i++,j--;
            }
            
            else if(nums[i]+nums[j]>=k){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};