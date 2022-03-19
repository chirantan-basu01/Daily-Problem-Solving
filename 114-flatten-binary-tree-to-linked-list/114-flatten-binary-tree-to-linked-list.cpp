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
    void flatten(TreeNode* root) {
        TreeNode* dummy = root;
        
        while(dummy) {
            if(dummy->left) {
                
                TreeNode* pre_node = dummy->left;
                
                while(pre_node->right) {
                    pre_node = pre_node->right;    
                }
                pre_node->right = dummy->right;
                
                dummy->right = dummy->left;
                dummy->left = NULL;
            }
            dummy = dummy->right;
        }
    }
};