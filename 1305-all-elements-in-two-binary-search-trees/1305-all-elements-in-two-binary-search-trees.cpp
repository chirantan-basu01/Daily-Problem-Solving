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
    void inorderTraversal(TreeNode* root,vector<int>&tree){
        if(root){
            inorderTraversal(root->left,tree);
            tree.push_back(root->val);
            inorderTraversal(root->right,tree);
        }
    }
    
    void mergedTrees(vector<int>&tree1,vector<int>&tree2,vector<int>&mergeTrees){
        int i=0,j=0,k=0;
        
        while(i<tree1.size() and j<tree2.size()){
            if(tree1[i]<tree2[j]){
                mergeTrees[k]=tree1[i];
                k++,i++;
            }
            else{
                mergeTrees[k]=tree2[j];
                k++,j++;
            }
        }
        
        while(i<tree1.size()){
            mergeTrees[k]=tree1[i];
            k++,i++;
        }
        
        while(j<tree2.size()){
            mergeTrees[k]=tree2[j];
            k++,j++;
        }
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>tree1,tree2;
        
        inorderTraversal(root1,tree1);
        inorderTraversal(root2,tree2);
        
        vector<int>mergeTrees(tree1.size()+tree2.size());
        
        mergedTrees(tree1,tree2,mergeTrees);
        
        return mergeTrees;
    }
};