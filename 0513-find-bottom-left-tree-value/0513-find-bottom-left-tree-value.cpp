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
    int findBottomLeftValue(TreeNode* root) {
        int ans=0;
        queue<TreeNode*> q;
        q.push(root);
        while(root!=NULL && !q.empty()){
            int s=q.size();
            ans=q.front()->val;
            for(int i=0;i<s;i++){
                root=q.front();
                q.pop();
                if(root->left) q.push(root->left);
                if(root->right) q.push(root->right);
            }
        }
        return ans;
    }
};