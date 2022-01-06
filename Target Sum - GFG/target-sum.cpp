// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:
    unordered_map<string,int>ump;
    int totalWays(vector<int>&A,int target,int currentIdx){
        if(currentIdx>=A.size() and target!=0)
            return 0;
        if(currentIdx>=A.size() and target==0)
            return 1;
            
        string currKey=to_string(currentIdx)+"_"+to_string(target);
        
        if(ump.find(currKey)!=ump.end())
            return ump[currKey];
        
        int posSign=totalWays(A,target-A[currentIdx],currentIdx+1);
        int negSign=totalWays(A,target+A[currentIdx],currentIdx+1);
        
        ump[currKey]=posSign+negSign;
        return ump[currKey];
    }
  
    int findTargetSumWays(vector<int>&A ,int target) {
        totalWays(A,target,0);
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>arr(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>arr[i];
        }
        int target;
        cin >> target;

        Solution ob;
        cout<<ob.findTargetSumWays(arr,target);
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends