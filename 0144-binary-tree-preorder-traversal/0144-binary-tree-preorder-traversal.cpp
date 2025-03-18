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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;
        while(!st.empty() || root!=NULL){
            while(root!=NULL){
                st.push(root);
                int temp=root->val;
                ans.push_back(temp);
                root=root->left;
            }
            root=st.top();
            st.pop();
            root=root->right;
        }
        return ans;
    }
};