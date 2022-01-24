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
    void deepestSum(TreeNode* root,int level,vector<int>&sum){
        if(level==sum.size())
            sum.push_back(root->val);
        else
            sum[level]+=root->val;
        
        if(root->left)
            deepestSum(root->left,level+1,sum);
        if(root->right)
            deepestSum(root->right,level+1,sum);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        vector<int>sum;
        deepestSum(root,0,sum);
        return sum.back();
    }
};