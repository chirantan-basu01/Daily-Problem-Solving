class Solution {
public:
    int minimumSum(int num) {
        string digit=to_string(num);
        int n=digit.size();
        vector<int>numbers;
        for(int i=0;i<n;i++){
            numbers.push_back(digit[i]);
        }
        sort(numbers.begin(),numbers.end());
        int ans1=(numbers[0]-'0')*10+numbers[2]-'0';
        int ans2=(numbers[1]-'0')*10+numbers[3]-'0';
        
        return ans1+ans2;
    }
};