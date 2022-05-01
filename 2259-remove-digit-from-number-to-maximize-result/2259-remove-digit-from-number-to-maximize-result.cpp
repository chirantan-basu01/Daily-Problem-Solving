class Solution {
public:
    string removeDigit(string number, char digit) {
        int count=0;
        vector<int>index_of_digit;
        
        for(int i=0;i<number.size();i++){
            if(number[i]==digit){
                index_of_digit.push_back(i);
            }
        }
        
        priority_queue<string>pq;
        for(auto index:index_of_digit){
            string ans="";
            for(int i=0;i<number.size();i++){
                if(index==i)
                    continue;
                else
                    ans.push_back(number[i]);
            }
            pq.push(ans);
        }
        return pq.top();
    }
};