class Solution {
public:
    bool check(vector<int>& arr,long long int trip,long long int m){
        long res = 0;
        for(int i : arr){
            res += (m/i);
            
            if(res>=trip){
                return true;
            }
        }
        return res>=trip;
    }
    
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long int s = 0;
        long long int e = 1e18;
        
        while(e-s>1){
            long m = (s+e)/2;
            
            if(check(time,totalTrips,m)){
                e = m;
            }else{
                s = m+1;
            }
        }
        
        if(check(time,totalTrips,s)) return s;
        return e;
    }
};