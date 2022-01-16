class Solution {
public:
    long int dp[100001];

    long long solve(int i,int n,vector<vector<int>>&res){
        if(i>=n){
            return 0LL;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        long long int pick=res[i][0]+solve(i+res[i][1]+1,n,res);
        long long int non_pick=solve(i+1,n,res);
                                 
        return dp[i]=max(pick,non_pick);
    }
    
    long long mostPoints(vector<vector<int>>& q) {
        memset(dp,-1,sizeof(dp));
        int n=q.size();
        long long val=solve(0,n,q);
        return val;
    }
};