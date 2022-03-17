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
    vector<vector<int>>ans;
    
    void pathSum(TreeNode* root,vector<int>&path,int targetSum){
        if(!root)
            return;
        
        path.push_back(root->val);
        targetSum-=root->val;
    
        if(root->left==NULL and root->right==NULL){
            if(targetSum==0){
                ans.push_back(path);
            }    
        }
        else{
            pathSum(root->left,path,targetSum);
            pathSum(root->right,path,targetSum);
        }
        
        path.pop_back();
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<int>path;
        pathSum(root,path,targetSum);
        return ans;
        
    }
};