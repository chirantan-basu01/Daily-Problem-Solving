class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int count=0;
        while(target>1){
            if(maxDoubles>0 and target%2==0){
                target=target/2;
                maxDoubles--;
            }
            else{
                target--;
            }
            count++;
            if(maxDoubles==0)
                break;
        }
        return count+target-1;
    }
};