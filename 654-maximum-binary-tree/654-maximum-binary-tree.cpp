/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* maxBTree(vector<int>&nums,int left,int right){
        int max_index=left;
        
        if(left>right)
            return NULL;
        
        for(int i=left;i<=right;i++){
            if(nums[i]>nums[max_index])
                max_index=i;
        }
        
        TreeNode* root=new TreeNode(nums[max_index]);
        root->left=maxBTree(nums,left,max_index-1);
        root->right=maxBTree(nums,max_index+1,right);
        
        return root;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return maxBTree(nums,0,nums.size()-1);
    }
};