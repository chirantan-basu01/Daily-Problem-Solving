class Solution {
public:
    long long numberOfWays(string s) {
        long long rZero=0,rOne=0;
        long long lZero=0,lOne=0;
        
        for(auto c:s){
            if(c=='0'){
                rZero++;
            }
            else{
                rOne++;
            }
        }
        long long ways=0;
         for(auto c:s){
             if(c=='0'){
                 ways+=(rOne*lOne);
                 lZero++;
                 rZero--;
             }
             else{
                 ways+=(rZero*lZero);
                 lOne++;
                 rOne--;
             }
         }
        return ways;
    }
};