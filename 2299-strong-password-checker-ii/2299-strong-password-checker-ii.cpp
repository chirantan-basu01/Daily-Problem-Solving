class Solution {
public:
    bool strongPasswordCheckerII(string str) {
        if(str.length()<8){ 
            return false; 
        }
        bool lower=false; 
        bool upper=false; 
        bool digit=false; 
        bool special=false; 
        
        for(int i=0;i<str.length();i++){ 
            char ch=str[i]; 
            if(i>0 && str[i]==str[i-1])
                return false; 
            else if(ch>='a' && ch<='z') 
                lower=true; 
            else if(ch>='A'&& ch<='Z') 
                upper=true; 
            else if(ch-'0'>=0 && ch-'0'<=9) 
                digit=true; 
            else if(ch=='!'|| ch=='@' || ch=='#'|| ch=='$'||ch=='%'||ch=='^'||ch=='&'||ch=='*'|| ch=='('||ch==')'||ch=='-'||ch=='+') 
                special=true;    
        } 
        return lower && upper && digit && special; 
    }
};