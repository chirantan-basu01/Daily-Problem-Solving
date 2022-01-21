class Solution {
public:
    int minSwaps(string s) {
        int n=s.size();
        int balanced=0,j=n-1,swaps=0;
        
        for(int i=0;i<n;i++){
            if(s[i]=='[')
                balanced++;
            else
                balanced--;
            if(balanced<0){
                while(i<j or s[j]!=']')
                    j--;
                swap(s[i],s[j]);
                swaps++;
                balanced=1;
            }
        }
        return swaps;
    }
};