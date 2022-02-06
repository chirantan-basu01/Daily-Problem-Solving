class Solution {
public:
    long long smallestNumber(long long num) {
        string str=to_string(num);
        sort(str.begin(),str.end());
        
        if(num<0){
            reverse(str.begin(),str.end());
            return -stoll(str);
        }
        
        if(str[0]=='0'){
            for(int i=0;i<str.size();i++){
                if(str[i]>'0'){
                    str[0]=str[i];
                    str[i]='0';
                    break;
                }
            }
        }
        return stoll(str);
    }
};