class Solution {
public:
    int convertTime(string current, string correct) {
        int count=0;
        
        int h1 = stoi(current.substr(0,2));
        int h2 = stoi(correct.substr(0,2));
        int d1 = stoi(current.substr(3,4));
        int d2 = stoi(correct.substr(3,4));
        
        int diff = (h2 - h1) * 60 + (d2 - d1);
        vector<int> moves = {60, 15, 5, 1};
        for (int i = 0; i < moves.size(); i++){
            while (diff >= moves[i]){
                count++;
                diff -= moves[i];
            }
        }
        return count;
    }
};
