class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int left=0,right=1e7;
        
        while(left<right){
            long long sum=0;
            long long mid=(left+right+1)/2;
            
            for(auto element:candies){
                sum+=element/mid;
            }
            
            if(k>sum){
                right=mid-1;
            }
            else{
                left=mid;
            }
        }
        return left;
    }
};