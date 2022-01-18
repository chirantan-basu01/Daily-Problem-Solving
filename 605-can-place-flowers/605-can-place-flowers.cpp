class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        flowerbed.push_back(0);
        flowerbed.insert(flowerbed.begin(),0);
        
        int i=0,flowers=0;
        while(i<flowerbed.size()-2 and flowers<n ){
            if(flowerbed[i]==0 and flowerbed[i+1]==0 and flowerbed[i+2]==0){
                flowerbed[i+1]=1;
                flowers++;
            }
            i++;
        }
        if(flowers==n)
            return true;
        else
            return false;
    }
};