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
    int preOrder(TreeNode* root,int max,int &ans){
        if(!root)
            return 0;
        
        if(root->val>=max){
            ans++;
            max=root->val;
        }
        preOrder(root->left,max,ans);
        preOrder(root->right,max,ans);
        
        return ans;
    }
    
    int goodNodes(TreeNode* root) {
        int ans=0;
        preOrder(root,INT_MIN,ans);
        return ans;
    }
};