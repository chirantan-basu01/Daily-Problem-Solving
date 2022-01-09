class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        int k=0;
        for(int i=0;i<n;i++){
            k+=(nums[i]==1);
        }
        nums.insert(nums.end(),nums.begin(),nums.end());
        int ans=n;
        
        int i=0,j=0,one=0;
        
        while(j<2*n){
            one+=(nums[j]==1);
             if(j-i+1==k){
                 ans=min(ans,k-one);
                 one-=(nums[i]==1);
                 i++;
             }
            j++;
        }
        return ans==n?0:ans;
    }
};