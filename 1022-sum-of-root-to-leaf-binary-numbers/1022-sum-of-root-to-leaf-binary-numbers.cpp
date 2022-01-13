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
    void rootToLeaf(TreeNode* root,string currentStr,int* ans){
        
        if(root->left==NULL and root->right==NULL){
            currentStr+=to_string(root->val);
            ans[0]+=stoi(currentStr,0,2);
            return;
        }
        
        if(root->left!=NULL)
            rootToLeaf(root->left,currentStr+to_string(root->val),ans);
        
        if(root->right!=NULL)
             rootToLeaf(root->right,currentStr+to_string(root->val),ans);
        
        return;
    }
    
    int sumRootToLeaf(TreeNode* root) {
        int* ans=new int[1];
        ans[0]=0;
        rootToLeaf(root,"",ans);
        return ans[0];
    }
};


