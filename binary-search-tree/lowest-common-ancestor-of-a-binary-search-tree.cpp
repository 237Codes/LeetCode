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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // If the root is null, there is no LCA, so return null.
        if (root == nullptr) {
            return nullptr;
        }
        
        // Check if the values of the current node and the target nodes p and q.
        int val = root->val;
        
        // If both p and q are smaller than the current node's value,
        // the LCA must be in the left subtree.
        if (val > p->val && val > q->val) {
            return lowestCommonAncestor(root->left, p, q);
        }
        // If both p and q are greater than the current node's value,
        // the LCA must be in the right subtree.
        else if (val < p->val && val < q->val) {
            return lowestCommonAncestor(root->right, p, q);
        }
        // If one of p or q is smaller and the other is greater than the current node's value,
        // or if p or q equals the current node's value, then the current node is the LCA.
        else {
            return root;
        }
    }
};
