class Solution {
public:
    int findFirstPos(vector<int>& nums, int target){
        int start=0;
        int end=nums.size()-1;
        int ans=-1;
        
        while(start<=end){
            int mid=(end+start)/2;
            if(nums[mid]==target){
                ans=mid;
                end=mid-1;
            }
            else if(nums[mid]<target)
                start=mid+1;
            else
                end=mid-1;
        }
        return ans;
    }
    
    int findLastPos(vector<int>& nums, int target){
        int start=0;
        int end=nums.size()-1;
        int ans=-1;
        
        while(start<=end){
            int mid=(end+start)/2;
            if(nums[mid]==target){
                ans=mid;
                start=mid+1;
            }
            else if(nums[mid]<target)
                start=mid+1;
            else
                end=mid-1;
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>result(2,-1);
        result[0]=findFirstPos(nums,target);
        result[1]=findLastPos(nums,target);
        
        return result;
    }
};