class Solution {
public:
    int longestSubsequence(string s, int k) {
        int j=0,ans=0,sum=0;
        bool stop=false;
        
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='0')
                ans++;
            else if(stop==0 and j<31){
                sum+=pow(2,j);
                if(sum>k){
                    stop=1;
                    sum-=pow(2,j);
                }
                else{
                    ans++;
                }
            }
            j++;
        }
        return ans;
    }
};