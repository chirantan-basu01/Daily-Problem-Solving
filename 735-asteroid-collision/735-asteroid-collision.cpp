class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>stk;
        for(int currStone:asteroids){
            if(currStone>0)
                stk.push(currStone);
            else{
                while(!stk.empty() and stk.top()<-currStone and stk.top()>0)
                    stk.pop();
                if(!stk.empty() and stk.top()==-currStone)
                    stk.pop();
                else if(!stk.empty() and stk.top()<0)
                    stk.push(currStone);
                else if(stk.empty())
                    stk.push(currStone);
            }
        }
        int n=stk.size();
        vector<int>res(n);
        
        for(int i=n-1;i>=0;i--){
            res[i]=stk.top();
            stk.pop();
        }
        return res;
    }
};