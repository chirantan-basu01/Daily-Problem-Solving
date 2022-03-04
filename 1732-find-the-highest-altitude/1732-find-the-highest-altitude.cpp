class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int result=0;
        int count=0;
        
        for(auto element:gain){
            count+=element;
            result=max(result,count);
        }
        return result;
    }
};