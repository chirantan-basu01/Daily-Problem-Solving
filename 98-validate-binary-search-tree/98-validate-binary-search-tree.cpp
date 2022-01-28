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
    bool isBST(TreeNode* root, long long& prev) {
        if (root == NULL) {
            return true;
        }

        bool l = isBST(root->left, prev);
        bool curr;
        if (root->val > prev)
            curr = true;
        else
            curr = false;
        prev = root->val;
        bool r = isBST(root->right, prev);

        return l and curr and r;
    }
    
    bool isValidBST(TreeNode* root) {
        long long mn = -3147483648;
        return isBST(root,mn);
    }
};



