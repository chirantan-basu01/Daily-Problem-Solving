class Solution {
public:
    vector<vector<int>>ans;
    
    void validCombos(int currIndex,vector<int> ds,int k,int n){
        if(n<=0){
            if(n==0 and k==0){
                ans.push_back(ds);
            }
            return;
        }
        
        for(int index=currIndex;index<=9;index++){
            if(index<=n){
                ds.push_back(index);
                validCombos(index+1,ds,k-1,n-index);
                ds.pop_back();
            }
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>ds;
        
        validCombos(1,ds,k,n);
        return ans;
    }
};