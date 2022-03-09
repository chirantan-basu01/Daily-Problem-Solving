class Solution {
public:
    int mySqrt(int x) {
        long long l = 0;
        long long h = x;
        long long res = -1;
        while(l<=h){
            long long mid = (h+l)/2;
            if((mid*mid)==x){
                return mid;
            }
            else if(mid*mid>x){
                h = mid-1;
            }
            else if(mid*mid<x){
                l = mid+1;
                res = mid;
           }
        }
        return res;
    }
};