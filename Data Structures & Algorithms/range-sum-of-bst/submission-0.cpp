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
    int rangeSumBST(TreeNode* root, int low, int high) {

        if(!root){
            return 0;
        }
        stack<TreeNode*>st;
        st.push(root);

        int res=0;
         while(!st.empty()){
            TreeNode* node=st.top();
            st.pop();
            if(node->val>=low&&node->val<=high){
                res+=node->val;

            }
            if(node->left&&node->val>=low){
                st.push(node->left);
            }
            if(node->right&&node->val<=high){
                st.push(node->right);
            }
         }

        return res;
    }
};