// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    string res="";
		    int n=A.size(),j=0;
		    vector<int>vis(26,0);
		    
		    for(int i=0;i<n;i++){
		        vis[A[i]-'a']++;
		        
		        while(j<i and vis[A[j]-'a']!=1)
		            j++;
		            
		        if(j==i){
		            if(vis[A[i]-'a']==1)
		                res+=A[i];
		            else
		                res+='#';
		        }
		        else{
		            res+=A[j];
		        }
		    }
		    return res;
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends