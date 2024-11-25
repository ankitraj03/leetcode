/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        stack<TreeNode*> st;
        // bool ans=0;
        while (root != NULL || !st.empty()) {
            while (root != NULL) {
                st.push(root);
                root = root->left;
            }

            root = st.top();
            st.pop();
            if (root->val == subRoot->val) {
                if(check(root, subRoot))
                return 1;
            }
            root = root->right;
        }
        return 0;
    }
    bool check(TreeNode* root, TreeNode* subroot) {
            int left=0, right=0;
        if (root == NULL && subroot == NULL)
            return 1;
        else if (root != NULL && subroot != NULL) {
            if (root->val != subroot->val)
                return 0;
            left = check(root->left, subroot->left);
            right = check(root->right, subroot->right);
        }
        else
        return 0;
        return (left && right);
    }
};