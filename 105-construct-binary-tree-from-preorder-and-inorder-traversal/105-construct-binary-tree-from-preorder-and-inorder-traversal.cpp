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
    TreeNode* constructTree(vector<int>&preorder,map<int,int>&mp,int start,int end,int &preIndex){
        if(start>end)
           return NULL;
        
        TreeNode* root=new TreeNode(preorder[preIndex]);
        int currentIdx=mp[preorder[preIndex]];
        preIndex++;
        
        root->left=constructTree(preorder,mp,start,currentIdx-1,preIndex);
        root->right=constructTree(preorder,mp,currentIdx+1,end,preIndex);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        int preIndex=0;
        return constructTree(preorder,mp,0,inorder.size()-1,preIndex);
    }
};