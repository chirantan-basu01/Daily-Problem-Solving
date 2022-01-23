class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
         vector<int>neg,pos;
        for(auto it:nums){
            if(it<0){
                neg.push_back(it);
            }
            else{
                pos.push_back(it);
            }
        }
        
        vector<int>ans;
        int i=0;
        int j=0;
        int n=neg.size();
        int m=pos.size();
        while(j<m && i<n){
            if(j<m) ans.push_back(pos[j]);
            if(i<n) ans.push_back(neg[i]);
            j++;
            i++;
        }
        return ans;
    }
};