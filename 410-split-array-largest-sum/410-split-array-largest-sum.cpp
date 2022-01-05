class Solution {
public:
    bool isValid(int currentVal,vector<int>& nums, int m){
        bool isTrue=true;
        int sum=1,n=nums.size(),total=0;
        for(int i=0;i<n;i++){
            if(nums[i]>currentVal)
                isTrue=false;
            if(total+nums[i]<=currentVal)
                total+=nums[i];
            else{
                sum++;
                total=nums[i];
            }
        }
        if(!isTrue)
            return false;
        else
            return (sum<=m);
    }
    
    int splitArray(vector<int>& nums, int m) {
        int left=1,right=0;
        for(int i=0;i<nums.size();i++){
            right+=nums[i];
        }
        if(m==1)
            return right;
        while(left<right){
            int mid=(left+right)/2;
            if(isValid(mid,nums,m))
                right=mid;
            else
                left=mid+1;
        }
     
        return left;
    }
};