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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
    
        if(root==NULL)
            return ans;
        
        q.push(root);
        while(!q.empty()){
            int currentSize=q.size();
            vector<int>level;
            
            while(currentSize>0){
                TreeNode* currentNode=q.front();
                q.pop();
                level.push_back(currentNode->val);
                currentSize--;
                
                if(currentNode->left)
                    q.push(currentNode->left);
                
                if(currentNode->right)
                    q.push(currentNode->right);
            }
            ans.push_back(level);
        }
        return ans;
    }
};