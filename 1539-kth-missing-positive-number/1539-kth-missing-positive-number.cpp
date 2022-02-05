class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        for(auto element:arr){
            if(element<=k)
                k+=1;
        }
        return k;
    }
};