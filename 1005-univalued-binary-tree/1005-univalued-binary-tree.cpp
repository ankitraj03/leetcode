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
    bool isUnivalTree(TreeNode* root) {
        bool ans=check(root, root->val);
        return ans;
    }
    bool check(TreeNode* root, int & val){
         if(root==NULL)
        return 1;
        else if(root->val!=val)
        return 0;

        int left=check(root->left, val);
        int right=check(root->right, val);
        return (left && right);
    }
};