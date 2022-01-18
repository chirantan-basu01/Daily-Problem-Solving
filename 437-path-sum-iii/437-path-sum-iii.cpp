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
    int ans;
    void paths(TreeNode* root, int targetSum){
        if(!root)
            return;
        if(root->val==targetSum)
            ans++;
        paths(root->left,targetSum-root->val);
        paths(root->right,targetSum-root->val);
    }
    
    int pathSum(TreeNode* root, int targetSum) {
        
        if(root){
            paths(root,targetSum);
            pathSum(root->left,targetSum);
            pathSum(root->right,targetSum);            
        }
        return ans;
    }
};