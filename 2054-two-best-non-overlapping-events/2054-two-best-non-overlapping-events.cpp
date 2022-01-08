class Solution {
private:
    int solve(int currentIdx,int jobs,vector<vector<int>>& events,vector<vector<int>>& dp){
        //base condition
        if(currentIdx==events.size() || jobs==2)
            return 0;
        
        if(dp[currentIdx][jobs]!=-1)
            return dp[currentIdx][jobs];
        
        vector<int>vec={events[currentIdx][1],INT_MAX,INT_MAX};
        int nextIdx=upper_bound(events.begin(),events.end(),vec)-events.begin();
        
        //can perform
        int val1=events[currentIdx][2]+solve(nextIdx,jobs+1,events,dp);
        //cannot perform
        int val2=solve(currentIdx+1,jobs,events,dp);
        
        return dp[currentIdx][jobs]=max(val1,val2);
    }
    
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        int n=events.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        sort(begin(events),end(events));
        
        return solve(0,0,events,dp);
    }
};