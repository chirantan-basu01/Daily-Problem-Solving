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
    bool symmetricTree(TreeNode *t1,TreeNode *t2){
        if(t1==NULL && t2==NULL)
            return true;
        if(t1==NULL || t2==NULL || t1->val!=t2->val)
            return false;
        
        return symmetricTree(t1->left,t2->right) && symmetricTree(t1->right,t2->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        return symmetricTree(root->left,root->right);
    }
};