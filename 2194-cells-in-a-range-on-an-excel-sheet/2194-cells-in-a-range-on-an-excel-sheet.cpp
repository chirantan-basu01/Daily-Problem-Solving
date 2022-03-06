class Solution {
public:
    vector<string> cellsInRange(string s) {
        char a=s[0];
        char b=s[3];
        char x=s[1];
        char y=s[4];
        
        vector<string>ans;
        
        for(char i=a;i<=b;i++){
            for(char j=x;j<=y;j++){
                string temp;
                temp+=i;
                temp+=j;
                ans.push_back(temp);
            }
        }
        return ans;
    }
};