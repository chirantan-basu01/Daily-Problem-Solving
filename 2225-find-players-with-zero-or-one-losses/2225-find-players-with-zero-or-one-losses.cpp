class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<int>win(100005,0);
        vector<int>loss(100005,0);
        
        vector<vector<int>>ans(2);
        
        for(auto element:matches){
            win[element[0]]++;
            loss[element[1]]++;
        }
        
        for(int i=0;i<loss.size();i++){
            if(loss[i]==0 and win[i]!=0)
                ans[0].push_back(i);
            
            if(loss[i]==1)
                ans[1].push_back(i);
        }
        return ans;
    }
};