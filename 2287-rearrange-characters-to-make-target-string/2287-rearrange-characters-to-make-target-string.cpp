class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int>ump;
        
        for(auto element:s){
            ump[element]++;
        }
        bool flag=true;
        int count=0;
        
        while(flag){
            for(auto ch:target){
                ump[ch]--;
                
                if(ump[ch]<0)
                    flag=false;
            }
            if(flag==true)
                count++;
        }
        return count;
    }
};