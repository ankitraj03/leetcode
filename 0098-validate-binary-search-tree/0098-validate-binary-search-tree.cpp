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
    bool isValidBST(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> temp;
        while(root!=NULL || !st.empty()){
            while(root!=NULL){
                st.push(root);
                root=root->left;
            }
            root=st.top();
            int tempo=st.top()->val;
            temp.push_back(tempo);
            st.pop();
            root=root->right;
        }
        for(int i=1;i<temp.size();i++){
            if(temp[i-1]>=temp[i])
            return false;
        }
        return true;
    }
};