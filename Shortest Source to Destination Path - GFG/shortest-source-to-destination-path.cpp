// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestDistance(int n, int m, vector<vector<int>> A, int X, int Y) {
        // code here
        if(!A[0][0] || !A[X][Y])
            return -1;
            
        int dx[]={-1,0,0,1};
        int dy[]={0,-1,1,0};
        
        queue<pair<int,int>>q;
        q.push({0,0});
        A[0][0]=0;
        int ans=0;
        
        while(!q.empty()){
            int size=q.size();
            while(size--){
                int i=q.front().first;
                int j=q.front().second;
                
                q.pop();
                for(int k=0;k<4;k++){
                    int x=i+dx[k];
                    int y=j+dy[k];
                    
                    if(x<0 || y<0 || x>=n || y>=m || !A[x][y])
                        continue;
                        
                    if(x==X and y==Y)
                        return ++ans;
                    
                    q.push({x,y});
                    A[x][y]=0;
                }
            }
            ++ans;
        }
        return -1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}  // } Driver Code Ends