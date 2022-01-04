class Solution {
public:
    bool checkValid(int mid,vector<int>&weights, int D){
        bool isValid=true;
        int days=1,total=0,n=weights.size();
        
        for(int i=0;i<n;i++){
            if(weights[i]>mid)
                isValid=false;
            if(total+weights[i]<=mid)
                total+=weights[i];
            else{
                days++;
                total=weights[i];
            }
        }
        if(!isValid)
            return false;
        else
            return (days<=D);
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int left=1,right=0;
        
        for(int i=0;i<weights.size();i++){
            right+=weights[i];
        }
        while(left<right){
            int mid=(left+right)/2;
            if(checkValid(mid,weights,days))
                right=mid;
            else
                left=mid+1;
        }
        return left;
    }
};