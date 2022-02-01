class Solution {
public:
    int dp[100005][2][2];
    
    int maxProfit(vector<int>& prices) {
        memset(dp,-1,sizeof(dp));
        return bestTime(prices,0,true,1);
    }
    
    int bestTime(vector<int>& prices,int currentIdx,bool canBuy,int transCount){
        //base condition
        if(currentIdx>=prices.size() or transCount<=0)
            return 0;
        
        //dp condition
        if(dp[currentIdx][canBuy][transCount]!=-1)
            return dp[currentIdx][canBuy][transCount];
        
        int idle=bestTime(prices,currentIdx+1,canBuy,transCount);
        int buy=0;
        int sell=0;
        
        if(canBuy){
            buy=-prices[currentIdx]+bestTime(prices,currentIdx+1,false,transCount);
            dp[currentIdx][canBuy][transCount]=max(buy,idle);
        }
        else{
            sell=prices[currentIdx]+bestTime(prices,currentIdx+1,true,transCount-1);
            dp[currentIdx][canBuy][transCount]=max(sell,idle);
        }
        return dp[currentIdx][canBuy][transCount];
    }
};