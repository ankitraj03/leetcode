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
    TreeNode* reverseOddLevels(TreeNode* root) {
        if (!root) return root; 
        queue<TreeNode*> q;
        q.push(root);
        int level = 0;

        while (!q.empty()) {
            int s = q.size();
            vector<TreeNode*> nodesAtLevel; 

            for (int i = 0; i < s; i++) {
                TreeNode* temp = q.front();
                q.pop();

                if (level % 2 == 1) { 
                    nodesAtLevel.push_back(temp);
                }

                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
            }

            if (level % 2 == 1) {
                int left = 0, right = nodesAtLevel.size() - 1;
                while (left < right) {
                    swap(nodesAtLevel[left]->val, nodesAtLevel[right]->val);
                    left++;
                    right--;
                }
            }

            level++;
        }
        
        return root;
    }
};
