/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* currentNode=root;
        
        while(currentNode!=NULL){
            if(currentNode->val>p->val and currentNode->val>q->val)
                currentNode=currentNode->left;
            else if(currentNode->val<p->val and currentNode->val<q->val)
                currentNode=currentNode->right;
            else
                return currentNode;
        }
        return NULL;
    }
};