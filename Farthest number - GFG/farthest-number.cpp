// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{   
  public:
    vector<int> farNumber(int n,vector<int> Arr){
        //code here
        vector<int>ans;
        
        for(int i=0;i<n;i++){
            int j=n-1;
            int index=-1;
            
            while(i<j){
                if(Arr[i]>Arr[j]){
                    index=j;
                    break;
                }
                j--;
            }
            ans.push_back(index);
        }
        return ans;
    }
};

// { Driver Code Starts.
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++)
            cin>>Arr[i];
        Solution obj;
        vector<int> answer=obj.farNumber(N,Arr);
        for(auto i:answer)
            cout<<i<<" ";
        cout<<endl;
  }
}  // } Driver Code Ends