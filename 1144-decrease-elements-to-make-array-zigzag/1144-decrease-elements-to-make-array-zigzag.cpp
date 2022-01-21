class Solution {
public:
    int movesToMakeZigzag(vector<int>& nums) {
        int count1=0,count2=0,n=nums.size();
        
        if(n<=1)
            return 0;
        
        //odd pos
        for(int i=1;i<n;i+=2){
            if(i==n-1){
                if(nums[i-1]<=nums[i])
                    count1+=nums[i]-nums[i-1]+1;
            }
            else{
                if(nums[i-1]<=nums[i] || nums[i+1]<=nums[i])
                    count1+=nums[i]-min(nums[i+1],nums[i-1])+1;
            }
        }
        
        //even pos
        for(int i=0;i<n;i+=2){
            if(i==0){
                if(nums[i]>=nums[i+1])
                    count2+=nums[i]-nums[i+1]+1;
            }
            else if(i==n-1){
                if(nums[i-1]<=nums[i])
                    count2+=nums[i]-nums[i-1]+1;
            }
            else{
                if(nums[i-1]<=nums[i] || nums[i+1]<=nums[i])
                    count2+=nums[i]-min(nums[i+1],nums[i-1])+1;
            }
        }
        return min(count1,count2);
    }
};