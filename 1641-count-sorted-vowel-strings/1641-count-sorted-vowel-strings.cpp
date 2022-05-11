class Solution {
public:
    void findVowels(int curr_idx,int str_length,int &count,int n) {
        str_length++;
        
        if(str_length==n) {
            count++;
            return;
        }
        
        for(int i=curr_idx;i<5;i++) {
            findVowels(i,str_length,count,n);
        }
    }
    
    int countVowelStrings(int n) {
        int count=0;
        
        for(int i=0;i<5;i++) {
            findVowels(i,0,count,n);
        }
        return count;
    }
};