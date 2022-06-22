// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// Your code goes hereclass Solution{
	
class Solution{
	public:
	void sortedMerge(int a[], int b[], int res[],int n, int m){
	   // Your code goes here
	   vector<int>ans;
	   
	   for(int i=0;i<n;i++){
	       ans.push_back(a[i]);
	   }
	   
	   for(int i=0;i<m;i++){
	       ans.push_back(b[i]);
	   }
	   
	   sort(ans.begin(),ans.end());
	   
	   for(int i=0;i<ans.size();i++){
	       res[i]=ans[i];
	   }
	}
};
	  


// { Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }

	    for(int i = 0;i<m;i++){
	        cin >> b[i];
	    }
	    
	    int res[n+m];

      
        Solution ob;
        ob.sortedMerge(a,b,res,n,m);

        for(int i = 0;i<n+m;i++){
	        cout << res[i] << " ";
	    }
	   
        
	    cout << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends