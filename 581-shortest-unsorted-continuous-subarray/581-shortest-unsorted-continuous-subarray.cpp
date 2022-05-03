class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>sorted(nums);
        int n=nums.size(),i=0,j=n-1;
        sort(sorted.begin(),sorted.end());
        
        while(i<n and nums[i]==sorted[i]){
            i++;
        }
        
        while(j>i and nums[j]==sorted[j]){
            j--;
        }
        
        return j-i+1;
    }
};