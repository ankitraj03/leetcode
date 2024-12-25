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
    vector<int> largestValues(TreeNode* root) {
        if (!root) return {}; 
        queue<TreeNode*> q;
        vector<int> ans;

        q.push(root);
        while (!q.empty()) {
            int s = q.size();
            int maxVal = INT_MIN; 

            for (int i = 0; i < s; i++) {
                TreeNode* curr = q.front();
                q.pop();

                maxVal = max(maxVal, curr->val); 
                if (curr->left) q.push(curr->left); 
                if (curr->right) q.push(curr->right);
            }

            ans.push_back(maxVal); 
        }

        return ans;
    }
};
