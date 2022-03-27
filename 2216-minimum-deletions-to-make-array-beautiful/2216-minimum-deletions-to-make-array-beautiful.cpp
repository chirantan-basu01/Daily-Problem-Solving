class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int remove=0;
        
        for(int i=0;i<nums.size()-1;i++){
            if((i+remove)%2==0){
                if(nums[i]==nums[i+1]){
                    remove++;
                }
            }
        }
        
        if((nums.size()-remove)%2!=0){
            remove++;
        }
        
        return remove;
    }
};