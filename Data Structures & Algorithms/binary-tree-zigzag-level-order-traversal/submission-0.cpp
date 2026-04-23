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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root){
            return {};
        }
        queue<TreeNode*>q;
        vector<vector<int>>res;
        q.push(root);
        int sign=1;
        while(!q.empty()){
            int qlen=q.size();
            vector<int>sub;
            for(int i=0;i<qlen;i++){
                TreeNode*node=q.front();
                q.pop();
                sub.push_back(node->val);
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            if(sign<0){
                reverse(sub.begin(),sub.end());
            }
            res.push_back(sub);
            sign=sign*-1;
        }
        return res;
    }
};