class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int start=0,n=s.size();
        int arr[n];
        int cost=0,maxlen=INT_MIN;
        
        for(int i=0;i<n;i++){
            arr[i]=abs(s[i]-t[i]);
        }
        
        for(int i=0;i<n;i++){
            cost+=arr[i];
            
            if(cost>maxCost){
                cost-=arr[start];
                start++;
            }
            maxlen=max(maxlen,i-start+1);
        }
        return maxlen;
    }
};