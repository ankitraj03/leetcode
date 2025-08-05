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
    int getMinimumDifference(TreeNode* root) {
        vector<int> arr;

        stack<TreeNode*> st;
        while(!st.empty() || root!=NULL){
            while(root!=NULL){
                st.push(root);
                arr.push_back(root->val);
                root=root->left;
            }

            root=st.top();
            st.pop();
            root=root->right;
        }
        sort(arr.begin(), arr.end());
        int ans=INT_MAX;
        for(int i=0;i<arr.size()-1;i++){
            ans=min(ans,(arr[i+1]-arr[i]));
        }
        return ans;
    }
};