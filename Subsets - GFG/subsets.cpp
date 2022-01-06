// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    void generateAllSubsets(int currentIdx,vector<int>&path,vector<vector<int>>&ans,vector<int>&A){
        if(currentIdx>=A.size()){
            ans.push_back(path);
            return;
        }
        
        path.push_back(A[currentIdx]);
        generateAllSubsets(currentIdx+1,path,ans,A);
        
        path.pop_back();
        generateAllSubsets(currentIdx+1,path,ans,A);
    }
    
    vector<vector<int> > subsets(vector<int>& A){
        vector<vector<int>>ans;
        vector<int>path;
        generateAllSubsets(0,path,ans,A);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}  // } Driver Code Ends