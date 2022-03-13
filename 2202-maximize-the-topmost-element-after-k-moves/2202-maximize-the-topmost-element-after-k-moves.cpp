class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {        
        if(nums.size()==1 && k%2==1){
            return -1;
        }
        
        int maxx = 0;
        
        int n=nums.size();
        for(int i=0;i<min(n,k-1);i++){
            maxx = max(maxx,nums[i]);
        }
        
        if(k+1<=nums.size()){
            maxx = max(maxx,nums[k]);
        }
        
        return maxx;

    }
};