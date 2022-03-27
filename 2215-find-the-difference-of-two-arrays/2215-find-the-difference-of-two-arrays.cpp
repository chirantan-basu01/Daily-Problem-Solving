class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans1,ans2;
        map<int,int>mp1,mp2;
        
        vector<vector<int>>ans;
        
        for(int i=0;i<nums1.size();i++){
            mp1[nums1[i]]++;
        }
        
        for(int i=0;i<nums2.size();i++){
            mp2[nums2[i]]++;
        }
        
        for(auto ele:mp1){
            if(mp2.find(ele.first)==mp2.end()){
                ans1.push_back(ele.first);
            }
        }
        ans.push_back(ans1);
        
        for(auto ele:mp2){
            if(mp1.find(ele.first)==mp1.end()){
                ans2.push_back(ele.first);
            }
        }
        ans.push_back(ans2);
        
        return ans;
    }
};