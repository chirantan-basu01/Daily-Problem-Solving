class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<int>diff;
        int min_cost=0;
        
        for(int i=0;i<costs.size();i++){
            min_cost+=costs[i][0];
            diff.push_back(costs[i][1]-costs[i][0]);
        }
        
        sort(diff.begin(),diff.end());
        for(int i=0;i<costs.size()/2;i++){
            min_cost+=diff[i];
        }
        return min_cost;
    }
};