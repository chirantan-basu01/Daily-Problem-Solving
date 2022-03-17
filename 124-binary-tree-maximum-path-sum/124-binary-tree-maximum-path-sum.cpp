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
    int maxPath(TreeNode* root,int &max_sum){
        if(!root)
            return 0;
        
        int left=maxPath(root->left,max_sum);
        int right=maxPath(root->right,max_sum);
        
        if(left<0)
            left=0;
        if(right<0)
            right=0;
        
        if(left+right+root->val>max_sum)
            max_sum=left+right+root->val;
        
        return root->val+=max(left,right);
    }
    
    int maxPathSum(TreeNode* root) {
        int max_sum=INT_MIN;
        maxPath(root,max_sum);
        return max_sum;
    }
};