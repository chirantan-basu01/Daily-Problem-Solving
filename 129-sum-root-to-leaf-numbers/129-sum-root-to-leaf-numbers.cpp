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
    int totalAns(TreeNode* root,int currentVal){
        if(!root)
            return 0;
        
        currentVal=currentVal*10+root->val;
        if(!root->left and !root->right)
            return currentVal;
        return totalAns(root->left,currentVal)+totalAns(root->right,currentVal);
    }
    
    int sumNumbers(TreeNode* root) {
        return totalAns(root,0);
    }
};