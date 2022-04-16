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
    int curr_sum=0;
    
    void traverse(TreeNode* root){
        if(root->right)
            traverse(root->right);
        
        curr_sum+=root->val;
        root->val=curr_sum;
        
        if(root->left)
            traverse(root->left);
        
    }
    
    TreeNode* convertBST(TreeNode* root) {
        if(!root)
            return root;
        
        traverse(root);
        return root;
    }
};