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
    void inOrder(TreeNode* root,vector<int>&ans){
        if(root){
            inOrder(root->left,ans);
            ans.push_back(root->val);
            inOrder(root->right,ans);
        }
        return;
    }
    
    int getMinimumDifference(TreeNode* root) {
        vector<int>ans;
        inOrder(root,ans);
        int mini=INT_MAX;
        for(int i=0;i<ans.size()-1;i++){
            mini=min(mini,ans[i+1]-ans[i]);
        }
        return mini;
    }
};