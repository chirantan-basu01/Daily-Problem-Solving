class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int left=-1,n=seats.size(),maxDist=INT_MIN;
        
        for(int i=0;i<n;i++){
            if(seats[i]==1){
                if(left==-1)
                    maxDist=i;
                else
                    maxDist=max(maxDist,(i-left)/2);
                left=i;
            }
        }
        if(seats[n-1]==0)
            maxDist=max(maxDist,n-1-left);
        return maxDist;
    }
};