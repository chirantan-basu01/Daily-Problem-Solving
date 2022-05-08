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
    pair<int,int>avgValue(TreeNode* root,int &count) {
        if(!root)
            return {0,0};
        
        pair<int,int>left=avgValue(root->left,count);
        pair<int,int>right=avgValue(root->right,count);
        
        int sum=(left.first+right.first+root->val);
        int cnt=(left.second+right.second+1);
        
        if(sum/cnt==root->val)
            count++;
        
        return {sum,cnt};
    }
    
    int averageOfSubtree(TreeNode* root) {
        int count=0;
        avgValue(root,count);
        
        return count;
    }
};