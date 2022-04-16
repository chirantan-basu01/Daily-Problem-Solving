class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long ways=0,pencost=0;
        
        while(pencost<=total){
            long long remaining_amount=total-pencost;
            long long pencils=remaining_amount/cost2+1;
            ways+=pencils;
            pencost+=cost1;
        }
        return ways;
    }
};