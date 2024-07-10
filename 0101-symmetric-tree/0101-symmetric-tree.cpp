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
    // vector<int> inorder(TreeNode* root){
    //     vector<int> ans;
    //     stack<TreeNode*> st;
    //     while(root!=NULL || !st.empty()){
    //         while(root!=NULL){
    //             st.push(root);
    //             root=root->left;
    //         }
    //         root=st.top();
    //         st.pop();
    //         ans.push_back(root->val);
    //         root=root->right;
    //     }
    //     return ans;
    // }
    // bool isSymmetric(TreeNode* root) {
    //    vector<int> left=inorder(root->left);
    //    vector<int> right=inorder(root->right);
    //    reverse(right.begin(), right.end());
    //    if(left!=right)
    //    return 0;
    //    else
    //    return 1;

    //    return 1;
    // }
    bool isMirror(TreeNode* left, TreeNode* right) {
    if (left == nullptr && right == nullptr) return true;
    if (left == nullptr || right == nullptr) return false;
    return (left->val == right->val) &&
           isMirror(left->left, right->right) &&
           isMirror(left->right, right->left);
}

bool isSymmetric(TreeNode* root) {
    if (root == nullptr) return true;
    return isMirror(root->left, root->right);
}
};