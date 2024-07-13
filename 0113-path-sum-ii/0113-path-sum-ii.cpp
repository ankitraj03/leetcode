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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> temp;
        sum2(root, ans, targetSum, 0, temp);
        return ans;
    }

    void sum2(TreeNode* root, vector<vector<int>>& ans, int targetSum, int sum,
              vector<int>& temp) {
        if (root == NULL)
            return;
        temp.push_back(root->val);
        sum += root->val;
        if (root->left == NULL && root->right == NULL && sum == targetSum) {
            ans.push_back(temp);
        }
        else{
        sum2(root->left, ans, targetSum, sum, temp);
        sum2(root->right, ans, targetSum, sum, temp);
        }
        temp.pop_back();
        sum -= root->val;
    }
};