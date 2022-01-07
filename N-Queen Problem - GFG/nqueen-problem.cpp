// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool areDiagValid(int currRow,int currCol,vector<vector<char>>&grid,int n){
        int i=currRow;
        int j=currCol;
        
        while(i>=0 and j>=0){ //top left diagonal
            if(grid[i][j]=='Q')
                return false;
            i--;
            j--;
        }
        
        i=currRow;
        j=currCol;
        
        while(i>=0 and j<n){ //top right diagonal
            if(grid[i][j]=='Q')
                return false;
            i--;
            j++;
        }
        
        i=currRow;
        j=currCol;
        
        while(i<n and j>=0){ //bottom left diagonal
            if(grid[i][j]=='Q')
                return false;
            i++;
            j--;
        }
        
        i=currRow;
        j=currCol;
        while(i<n and j<n){ //bottom right diagonal
            if(grid[i][j]=='Q')
                return false;
            i++;
            j++;
        }
        return true;
    }
    
    bool isColValid(int currCol,vector<vector<char>>&grid,int n){
        for(int i=0;i<n;i++){
            if(grid[i][currCol]=='Q')
                return false;
        }
        return true;
    }
    
    bool isRowValid(int currRow,vector<vector<char>>&grid,int n){
        for(int i=0;i<n;i++){
            if(grid[currRow][i]=='Q')
                return false;
        }
        return true;
    }
    
    bool isValid(int currRow,int currCol,vector<vector<char>>&grid,int n){
        return isColValid(currCol,grid,n) and isRowValid(currRow,grid,n) and areDiagValid(currRow,currCol,grid,n);
    }
    
    void nQueens(int currRow,vector<vector<char>>&grid,vector<vector<int>>&ans,int n,vector<int>&tempAns){
        if(currRow==n){
            ans.push_back(tempAns);
            return;
        }
        for(int currCol=0;currCol<n;currCol++){
            if(isValid(currRow,currCol,grid,n)){
                grid[currRow][currCol]='Q';
                tempAns.push_back(currCol+1);
                nQueens(currRow+1,grid,ans,n,tempAns);
                tempAns.pop_back();
                grid[currRow][currCol]='.'; // undoing the change and replacing it with dot
            }
        }
        return;
    }
    
    vector<vector<int>> nQueen(int n) {
        vector<vector<int>>ans;
        vector<int>tempAns;
        vector<vector<char>>grid(n,vector<char>(n,'.'));
        nQueens(0,grid,ans,n,tempAns);
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends