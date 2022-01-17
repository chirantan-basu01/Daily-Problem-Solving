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
    int sumOfLeftLeaves(TreeNode* root) {
        int ans=0;
        sumOfLeavesInLeft(root,false,ans);
        return ans;
    }
    
    void sumOfLeavesInLeft(TreeNode* root,bool isLeft,int &ans){
        if(root==NULL)
            return;
        if(root->left==NULL and root->right==NULL and isLeft){
            ans+=root->val;
            return;
        }
        sumOfLeavesInLeft(root->left,true,ans);
        sumOfLeavesInLeft(root->right,false,ans);
    }
};