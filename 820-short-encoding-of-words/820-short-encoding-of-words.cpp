class Solution {
public:
    static bool compare(string &a,string &b) {
        return a.size()>b.size();
    }
    
    int minimumLengthEncoding(vector<string>& words) {
        sort(words.begin(),words.end(),compare);
        
        string res="";
        res+=words[0]+"#";
        
        for(int i=1;i<words.size();i++){
            int pos=res.find(words[i]+"#");
            
            if(pos!=-1)
                continue;
            else
                res+=words[i]+"#";
        }
        return res.size();
    }
};