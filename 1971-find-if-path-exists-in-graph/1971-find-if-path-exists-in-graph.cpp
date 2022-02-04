class Solution {
public:
    bool DFS(vector<bool>&visited, vector<vector<int>>&graph,int curr,int end){
        if(curr==end)
            return true;
        if(visited[curr])
            return false;
        
        visited[curr]=true;
        
        for(int i=0;i<graph[curr].size();i++){
            if(DFS(visited,graph,graph[curr][i],end))
                return true;
        }
        return false;
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination){
        vector<vector<int>>graph(n);
        
        for(int i=0;i<edges.size();i++){
            int v1=edges[i][0];
            int v2=edges[i][1];
            
            graph[v1].push_back(v2);
            graph[v2].push_back(v1);
        }
        vector<bool>visited(n,false);
        return DFS(visited,graph,source,destination);
    }
};