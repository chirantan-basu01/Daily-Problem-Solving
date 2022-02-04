class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>ump;
        int sum=0,longestSumArray=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                sum--;
            else
                sum++;
            if(sum==0){
                if(i+1>longestSumArray)
                    longestSumArray=i+1;
            }
            else if(ump.find(sum)!=ump.end()){
                int ans=i-ump[sum];
                if(longestSumArray<ans)
                    longestSumArray=ans;
            }
            else{
                ump[sum]=i;
            }
        }
        return longestSumArray;
    }
};