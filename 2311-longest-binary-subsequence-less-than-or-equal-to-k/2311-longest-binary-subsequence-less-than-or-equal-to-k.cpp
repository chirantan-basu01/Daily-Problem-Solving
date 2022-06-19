class Solution {
public:
    int longestSubsequence(string s, int k) {
       long long z=0,o=0,n=s.length();
        vector<long long> zeros,ones;
        for(long long i=n-1;i>=0;i--){
            char c=s[i];
            z+=c=='0';
            o+=c=='1';
            zeros.push_back(z);
            ones.push_back(o);
        }
        reverse(s.begin(),s.end());
        long long ans=z;
        long long val=0;
        for(long long i=0;i<n && k>0;i++){
            if(s[i]=='1'){
                if(i>31)return ans;
                long long p=(long long)pow(2,i);
                if(p<=k){
                    k-=p;
                    ans++;
                }
                else return ans;
            }
        }
        return ans; 
    }
};