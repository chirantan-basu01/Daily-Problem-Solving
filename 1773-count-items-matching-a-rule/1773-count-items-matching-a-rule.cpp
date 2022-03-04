class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int element;
        
        if(ruleKey=="type")
            element=0;
        if(ruleKey=="color")
            element=1;
        if(ruleKey=="name")
            element=2;
        
        int ans=0;
        for(int i=0;i<items.size();i++){
            if(items[i][element]==ruleValue){
                ans++;
            }
        }
        return ans;
    }
};