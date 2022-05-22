class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int>req_rocks;
        
        for(int i=0;i<capacity.size();i++){
            req_rocks.push_back(capacity[i]-rocks[i]);
        }
        
        sort(req_rocks.begin(),req_rocks.end());
        int count=0;
        
        for(auto element:req_rocks){
            if(element==0)
                count++;
            else if(additionalRocks-element>=0){
                count++;
                additionalRocks-=element;
            }
        }
        return count;
    }
};