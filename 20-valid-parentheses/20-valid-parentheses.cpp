class Solution {
public:
    bool isValid(string s) {
        stack<int>stk;
        for(int i=0;i<s.size();i++){
            char currentChar=s[i];
            
            if(currentChar=='(' || currentChar=='{' || currentChar=='[')
                stk.push(currentChar);
            else{
                if(stk.empty())
                    return false;
                if(currentChar==')' and stk.top()=='(')
                    stk.pop();
                else if(currentChar==']' and stk.top()=='[')
                    stk.pop();
                else if(currentChar=='}' and stk.top()=='{')
                    stk.pop();
                else
                    return false;
            }
        }
        return stk.empty();
    }
};