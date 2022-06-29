// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2){
        priority_queue<long long int,vector<long long int>,greater<long long int>>pq(A,A+N);
        long long int count=0,sum=0;
        
        while(!pq.empty()){
            long long int temp=pq.top();
            count++;
            
            if(count>K1 and count<K2)
                sum+=temp;
            else if(count==K2)
                break;
            
            pq.pop();
        }
        return sum;
    }
};

// { Driver Code Starts.
int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        cin>>n;
        long long a[n+5];
        for(int i =0;i<n;i++)
            cin >> a[i];
        
        long long k1, k2;
        cin >> k1 >> k2;
        Solution ob;
        cout << ob.sumBetweenTwoKth(a, n, k1, k2) << endl;
        
    }
	return 0;
}
  // } Driver Code Ends