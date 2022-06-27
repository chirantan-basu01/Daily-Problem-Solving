class Solution {
public:
    int minPartitions(string n) {
        char highest_val='0';
        for(auto ch:n){
            if(ch>highest_val){
                highest_val=ch;
            }
        }
        return highest_val-'0';
    }
};