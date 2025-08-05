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
    TreeNode* increasingBST(TreeNode* root) {
        vector<TreeNode*> nodes;
        stack<TreeNode*> st;
        while(!st.empty() || root!=NULL){
            while(root!=NULL){
                st.push(root);
                root=root->left;
            }
            root=st.top();
            st.pop();
            nodes.push_back(root);
            root=root->right;
        }
        TreeNode* dummy = new TreeNode(-1);
        TreeNode* temp = dummy;

        for (auto node : nodes) {
            node->left = nullptr;       
            temp->right = node;
            temp = temp->right;
        }
        return dummy->right;
    }
};