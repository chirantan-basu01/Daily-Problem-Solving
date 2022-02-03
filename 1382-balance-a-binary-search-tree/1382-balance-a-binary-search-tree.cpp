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
    vector<TreeNode*>sortedArray;
    
    void inorder(TreeNode* root){
        if(root){
            inorder(root->left);
            sortedArray.push_back(root);
            inorder(root->right);
        }
        return;
    }
    
    TreeNode* arrayToBst(int start,int end){
        if(start>end)
            return NULL;
        
        int mid=(start+end)/2;
        
        TreeNode* root=sortedArray[mid];
        
        root->left=arrayToBst(start,mid-1);
        root->right=arrayToBst(mid+1,end);
        
        return root;
    }
    
    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);
        return arrayToBst(0,sortedArray.size()-1);
    }
};