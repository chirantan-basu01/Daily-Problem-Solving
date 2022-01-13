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
    bool isSame(TreeNode* root,int currentVal){
        if(root==NULL)
            return true;
        if(root->val!=currentVal)
            return false;
        
        int la=isSame(root->left,root->val);
        int ra=isSame(root->right,root->val);
        
        return la and ra;
    }
    
    bool isUnivalTree(TreeNode* root) {
        return isSame(root,root->val);
    }
};