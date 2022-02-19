class Solution {
public:
    void solve(vector<long long>&ans, long long num){
        if(num%3==0){
            ans.push_back(num/3-1);
            ans.push_back(num/3);
            ans.push_back(num/3+1);
        }
    }
    
    vector<long long> sumOfThree(long long num) {
        vector<long long> ans;
        solve(ans,num);
        return ans;
    }
};