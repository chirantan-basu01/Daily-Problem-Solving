class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int i=0,n=costs.size();
        
        if(n<=1){
            if(costs[0]<=coins)
                return 1;
            else
                return 0;
        }
        
        while(costs[i]<=coins and i<n){
            coins-=costs[i];
            i++;
        }
        return i;
    }
};