class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string str=to_string(num);
        int i=0,j=0,n=str.size();
        int count=0;
        
        while(j<n) {
            if(j-i+1<k) {
                j++;
            }
            else if(j-i+1==k) {
                string s=str.substr(i,k);
                int number=stoi(s);
                
                if(number!=0 and num%number==0)
                    count++;
                
                i++;
                j++;
            }
        }
        return count;
    }
};