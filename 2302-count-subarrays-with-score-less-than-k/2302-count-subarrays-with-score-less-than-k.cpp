class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int j=0;
        long long sum=0,ans=0;
        
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum*(i-j+1)>=k)
                sum-=nums[j++];
            ans+=i-j+1;
        }
        return ans;
    }
};