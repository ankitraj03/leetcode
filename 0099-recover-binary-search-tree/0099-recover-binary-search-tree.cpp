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

    void recoverTree(TreeNode* root) {
        if (!root) return;

        std::stack<TreeNode*> st;
        TreeNode *first = nullptr, *second = nullptr, *prev = nullptr;

        while (root != nullptr || !st.empty()) {
            while (root != nullptr) {
                st.push(root);
                root = root->left;
            }
            root = st.top();
            st.pop();

            if (prev != nullptr && prev->val > root->val) {
                if (first == nullptr) {
                    first = prev;
                }
                second = root;
            }

            prev = root;
            root = root->right;
        }

        if (first != nullptr && second != nullptr) {
            std::swap(first->val, second->val);
        }
    }
    
};