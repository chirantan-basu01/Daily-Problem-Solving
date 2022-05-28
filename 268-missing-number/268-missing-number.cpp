class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int total=0;
        int sum=0;
        int n=nums.size();
        total=n*(n+1)/2;
        
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        return abs(total-sum);
    }
};