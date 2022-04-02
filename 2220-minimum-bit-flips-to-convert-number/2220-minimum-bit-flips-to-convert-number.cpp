class Solution {
public:
    int minBitFlips(int start, int goal) {
        int c=0;
        for(int i=0;i<32;i++){
            if((1<<i&start)!=(1<<i&goal))
                c++;
        }
        return c;
    }
};