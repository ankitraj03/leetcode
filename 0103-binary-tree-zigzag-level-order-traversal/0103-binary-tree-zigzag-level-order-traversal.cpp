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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL){
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            vector<int> temp;
            int l=q.size();
            for(int i=0;i<l;i++){
                TreeNode* a=q.front();
                q.pop();
                temp.push_back(a->val);
                if(a->left)
                q.push(a->left);
                if(a->right)
                q.push(a->right);
            }
            ans.push_back(temp);
        }
        for(int i=0;i<ans.size();i++){
            if(i%2==1) reverse(ans[i].begin(),ans[i].end());
        }
        return ans;
    }
};