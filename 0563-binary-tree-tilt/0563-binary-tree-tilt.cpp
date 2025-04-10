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
int ans=0;
    int findTilt(TreeNode* root) {
        solve(root);
        return ans;
    }
    int solve(TreeNode* root){
        if(root==NULL)
        return 0;

        int leftsum=solve(root->left);
        int rightsum=solve(root->right);
        ans+=abs(leftsum-rightsum);
        return root->val+leftsum+rightsum;
    }
};