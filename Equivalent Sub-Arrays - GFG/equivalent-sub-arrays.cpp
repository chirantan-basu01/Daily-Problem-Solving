// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    int countDistinctSubarray(int arr[], int n){
       
        unordered_map<int,int>mp;
        unordered_set<int>st;
        st.insert(arr,arr+n);
        
        int j=0,count=0,size=st.size();
        
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
            while(mp.size()>=st.size() and j<=i){
                count+=n-i;
                mp[arr[j]]--;
                
                if(mp[arr[j]]==0)
                    mp.erase(arr[j]);
                j++;
            }
        }
        return count;
    }
};


// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.countDistinctSubarray(a,n)<<endl;
	}
	return 0;
}  // } Driver Code Ends