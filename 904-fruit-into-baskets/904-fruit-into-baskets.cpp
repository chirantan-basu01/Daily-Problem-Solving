class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>ump;
        int i=0,j=0,ans=0;
        
        while(j<fruits.size()){
            ump[fruits[j]]++;
            
            while(ump.size()>2){
                ump[fruits[i]]--;
                if(ump[fruits[i]]==0)
                    ump.erase(fruits[i]);
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};