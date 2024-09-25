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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
    vector<int> vec1;
    vector<int> vec2;

    stack<TreeNode*> st;
    stack<TreeNode*> st1;

    while (!st.empty() || root1 != NULL) {
        while (root1 != NULL) {
            st.push(root1);
            root1 = root1->left;
        }
        root1 = st.top();
        st.pop();
        if (root1->left == NULL && root1->right == NULL) {  
            vec1.push_back(root1->val);
        }
        root1 = root1->right;
    }

    while (!st1.empty() || root2 != NULL) {
        while (root2 != NULL) {
            st1.push(root2);
            root2 = root2->left;
        }
        root2 = st1.top();
        st1.pop();
        if (root2->left == NULL && root2->right == NULL) {  
            vec2.push_back(root2->val);
        }
        root2 = root2->right;
    }
    return vec1 == vec2;
    }
};