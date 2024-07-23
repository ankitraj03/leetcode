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
    TreeNode* helper(vector<int> & nums, int high, int low){
        if(low>high)
        return NULL;

        int mid=(high+low)/2;
        TreeNode* node= new TreeNode(nums[mid]);
        if(high==low)
        return node;

        node->left=helper(nums, mid-1, low);
        node->right=helper(nums, high, mid+1);
        return node;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode * root= helper(nums, nums.size()-1, 0);
        return root;
    }
};