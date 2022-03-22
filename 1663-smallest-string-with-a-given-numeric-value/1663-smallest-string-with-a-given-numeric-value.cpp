class Solution {
public:
    string getSmallestString(int n, int k) {
        string res(n, 'a');
        
        k = k-n;
        int i = res.size() - 1;
        
        while(k > 0){
            int temp = min(k, 25);
            res[i] += temp;
            k = k - temp;
            --i;
        }
        return res;
    }
};