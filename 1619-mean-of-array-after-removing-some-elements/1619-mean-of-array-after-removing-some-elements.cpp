class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int del=n*0.05;
        
        double sum=0;
        for(int i=del;i<n-del;i++){
            sum+=arr[i];
        }
        return sum/(n-2*del);
    }
};