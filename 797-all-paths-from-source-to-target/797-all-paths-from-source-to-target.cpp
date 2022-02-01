class Solution {
public:
    void sourceToTarget(vector<vector<int>>&graph,int currNode,vector<bool>&visited,int n,
                       vector<int>&currentPath,vector<vector<int>>&ans){
        if(currNode==n-1){
            currentPath.push_back(currNode);
            ans.push_back(currentPath);
            currentPath.pop_back();
            return;
        }
        if(visited[currNode]==true)
            return;
        
        visited[currNode]=true;
        currentPath.push_back(currNode);
        
        for(auto neighbours:graph[currNode]){
            sourceToTarget(graph,neighbours,visited,n,currentPath,ans);
        }
        visited[currNode]=false;
        currentPath.pop_back();
        
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>ans;
        int n=graph.size();
        vector<bool>visited(n);
        vector<int>currentPath;
        
        sourceToTarget(graph,0,visited,n,currentPath,ans);
        return ans;
    }
};