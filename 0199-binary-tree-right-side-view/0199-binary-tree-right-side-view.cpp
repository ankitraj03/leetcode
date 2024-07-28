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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> ans;
        q.push(root);
        while(root!=NULL && !q.empty()){
        vector<int> temp;
            int s=q.size();
            for(int i=0;i<s;i++){
                temp.push_back(root->val);
                if(root->left)
                q.push(root->left);
                if(root->right)
                q.push(root->right);
                q.pop();
            root=q.front();
            }
            
            ans.push_back(temp[s-1]);
        }
        return ans;
    }
};