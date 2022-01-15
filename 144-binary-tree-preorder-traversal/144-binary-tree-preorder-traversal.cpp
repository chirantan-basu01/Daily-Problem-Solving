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
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*>stk;
        vector<int>ans;
        
        if(root==NULL)
            return ans;
        
        stk.push(root);
        TreeNode *currentNode=NULL;
        while(!stk.empty()){
            currentNode=stk.top();
            ans.push_back(currentNode->val);
            stk.pop();
            
            if(currentNode->right!=NULL)
                stk.push(currentNode->right);
            
             if(currentNode->left!=NULL)
                stk.push(currentNode->left);
        }
        return ans;
    }
};