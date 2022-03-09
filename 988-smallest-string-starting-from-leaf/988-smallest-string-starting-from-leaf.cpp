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
    string ans="";
    
    void smallestString(TreeNode* root,string word){
        if(!root)
            return;
        if(!root->left and !root->right){
            word+=(root->val+'a');
            reverse(word.begin(),word.end());
            if(ans.empty())
                ans+=word;
            else
                ans=min(ans,word);
            return;
        }
        word+=(root->val+'a');
        smallestString(root->left,word);
        smallestString(root->right,word);
    }
    
    string smallestFromLeaf(TreeNode* root) {
        smallestString(root,"");
        return ans;
    }
};