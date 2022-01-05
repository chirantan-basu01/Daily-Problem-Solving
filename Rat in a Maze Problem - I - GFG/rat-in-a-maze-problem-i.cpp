// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void generateAllPaths(vector<vector<int>>&grid,int currRow,int currCol,int n,string current,vector<string>&ans){
        if(currRow<0 or currRow>=n or currCol<0 or currCol>=n or grid[currRow][currCol]==0)
            return;
        if(currRow==n-1 and currCol==n-1){
            ans.push_back(current);
            return;
        }
        grid[currRow][currCol]=0;
        
        generateAllPaths(grid,currRow-1,currCol,n,current+"U",ans);
        generateAllPaths(grid,currRow,currCol+1,n,current+"R",ans);
        generateAllPaths(grid,currRow+1,currCol,n,current+"D",ans);
        generateAllPaths(grid,currRow,currCol-1,n,current+"L",ans);
        
        grid[currRow][currCol]=1;
        return;
    }
    
    vector<string> findPath(vector<vector<int>> &grid, int n) {
        vector<string>ans;
        generateAllPaths(grid,0,0,n,"",ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends