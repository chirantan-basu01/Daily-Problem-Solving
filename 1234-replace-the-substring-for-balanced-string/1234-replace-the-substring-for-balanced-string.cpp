class Solution {
public:
    int balancedString(string s) {
        int q=0,w=0,e=0,r=0;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='Q')
                q++;
            if(s[i]=='W')
                w++;
            if(s[i]=='E')
                e++;
            if(s[i]=='R')
                r++;
        }
        
        int req_size=s.size()/4;
        int i=0;
        int qc=q,wc=w,ec=e,rc=r,minlen=100001;
        
        if(q==req_size and w==req_size and e==req_size and r==req_size)
            return 0;
        
        for(int j=0;j<s.size()+1;j++){
            
            if(qc<=req_size and wc<=req_size and ec<=req_size and rc<=req_size){
                if(j-i<=minlen)
                    minlen=j-i;
                if(s[i]=='Q')
                    qc++;
                if(s[i]=='W')
                    wc++;
                if(s[i]=='E')
                    ec++;
                if(s[i]=='R')
                    rc++;
                
                i++,j--;
            }
            else if(j<s.size()){
                if(s[j]=='Q')
                    qc--;
                if(s[j]=='W')
                    wc--;
                if(s[j]=='E')
                    ec--;
                if(s[j]=='R')
                    rc--;
            }
        }
        return minlen;
    }
};