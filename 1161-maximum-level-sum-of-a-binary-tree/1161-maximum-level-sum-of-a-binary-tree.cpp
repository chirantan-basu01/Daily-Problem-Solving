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
    void preOrder(TreeNode* root,int level,map<int,int>&mp){
        if(root==NULL)
            return;
        
        level++;
        
        if(mp.count(level)==0)
            mp[level]=root->val;
        else
            mp[level]+=root->val;
        
        preOrder(root->left,level,mp);
        preOrder(root->right,level,mp);
    }
    
    int maxLevelSum(TreeNode* root) {
        if(root==NULL)
            return 0;
        
        map<int,int>mp;
        int level=0;
        
        preOrder(root,level,mp);
        
        int maximum=INT_MIN,ans;
        for(auto it:mp){
            if(it.second>maximum){
                maximum=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};