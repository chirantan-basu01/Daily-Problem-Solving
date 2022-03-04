class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int side=0,maxLen=0,count=0;
        
        for(auto rectangle:rectangles){
            side=min(rectangle[0],rectangle[1]);
            
            if(maxLen<side){
                maxLen=side;
                count=1;
            }
            else if(maxLen==side){
                count++;
            }
        }
        return count;
    }
};