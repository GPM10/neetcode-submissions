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
    bool hasPathSum(TreeNode* root, int targetSum) {
        return dfs(root,targetSum,0);
        
        
    }
    bool dfs(TreeNode*root,int targetSum,int cur_sum ){
        if(!root){
            return 0;
        }
        cur_sum+=root->val;
        if(cur_sum==targetSum&&!root->left&&!root->right){
            return true;
        }
        return dfs(root->left,targetSum,cur_sum)||dfs(root->right,targetSum,cur_sum);
    }
};