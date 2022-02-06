class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;
        
        for(int i=0;i<nums.size();i+=2){
            even.push_back(nums[i]);
        }
        
        for(int i=1;i<nums.size();i+=2){
            odd.push_back(nums[i]);
        }
        
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end(),greater<int>());
        
        vector<int>ans;
        int i=0,j=0;
        int n=even.size(),m=odd.size();
        while(i<even.size() || j<odd.size()){
            if(i<n)
                ans.push_back(even[i]);
            if(j<m)
                ans.push_back(odd[i]);
            i++,j++;
        }
        return ans;
    }
};