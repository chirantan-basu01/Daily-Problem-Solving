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
    TreeNode* first=NULL;
    TreeNode* second=NULL;
    TreeNode* prev=NULL;
    
    void recoverTree(TreeNode* root) {
        restructure_tree(root);
        swap(first->val,second->val);
    }
    
    void restructure_tree(TreeNode* root){
        if(root==NULL)
            return;
        restructure_tree(root->left);
        
        if(prev==NULL){
            prev=root;
        }
        else{
            if(first==NULL and prev->val>=root->val)
                first=prev;
            if(first!=NULL and prev->val>=root->val)
                second=root;   
        }
        
        prev=root;
        restructure_tree(root->right);
    }
};