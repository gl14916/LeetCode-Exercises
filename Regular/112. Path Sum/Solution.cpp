/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if (root != NULL) {
            int diff = sum - root->val;
            if (root->left == NULL && root->right == NULL) return !diff;
            return hasPathSum(root->left, diff) || hasPathSum(root->right, diff);
        }
        return false;
    }
};
