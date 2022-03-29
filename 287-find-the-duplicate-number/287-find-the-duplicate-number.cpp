class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int low=1,high=nums.size()-1;
        int count;
        
        while(low<=high){
            int mid=(low+high)/2;
            count=0;
            for(auto element:nums){
                if(element<=mid)
                    count++;
            }
            
            if(count<=mid)
                low=mid+1;
            else
                high=mid-1;
        }
        return low;
    }
};