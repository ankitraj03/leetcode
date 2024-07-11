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
   void count(TreeNode* root, unordered_map<int, int>& mp) {
    if (root == NULL)
        return;
    mp[root->val]++;
    count(root->left, mp);
    count(root->right, mp);
}

vector<int> findMode(TreeNode* root) {
    unordered_map<int, int> mp;
    count(root, mp);

    int maxCount = 0;
    for (const auto& entry : mp) {
        if (entry.second > maxCount) {
            maxCount = entry.second;
        }
    }

    vector<int> ans;
    for (const auto& entry : mp) {
        if (entry.second == maxCount) {
            ans.push_back(entry.first);
        }
    }

    return ans;
}
};