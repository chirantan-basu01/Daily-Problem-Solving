class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sumCost=0,sumGas=0;
        
        for(int i=0;i<gas.size();i++){
            sumGas+=gas[i];
        }
        for(int i=0;i<cost.size();i++){
            sumCost+=cost[i];
        }
        if(sumGas<sumCost)
            return -1;
        int total=0,res=0;
        for(int i=0;i<gas.size();i++){
            total+=(gas[i]-cost[i]);
            if(total<0){
                total=0;
                res=i+1;
            }
        }
        return res;
    }
};