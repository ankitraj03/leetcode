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
    int kthSmallest(TreeNode* root, int k) {
        int ans=0;
        vector<int> vect;
        stack<TreeNode*> st;
        while(root!=NULL || !st.empty()){
            while(root!=NULL){
                st.push(root);
                root=root->left;
            }
            root=st.top();
            st.pop();
            vect.push_back(root->val);
            root=root->right;
        } 
        ans=vect[k-1];
        return ans;
    }
};