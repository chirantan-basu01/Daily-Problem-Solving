class Solution {
public:
    int numberOfSteps(int n) {
        int res = 0;
        while (n) {
            n = n & 1 ? --n : n >> 1;
            res++;
        }
        return res;
    }
};