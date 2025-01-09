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
        // Call a helper function to check if the tree is a valid BST
        return isBST(root, nullptr, nullptr);
    }
    
    // Helper function for checking if a binary tree is a valid BST
    bool isBST(TreeNode* node, TreeNode* minNode, TreeNode* maxNode) {
        // Base case: If the node is null, it's a valid BST
        if (node == nullptr) {
            return true;
        }
        
        // Check if the current node's value is within the valid range
        if ((minNode && node->val <= minNode->val) || (maxNode && node->val >= maxNode->val)) {
            return false; // The current node violates the BST property
        }
        
        // Recursively check the left and right subtrees
        // For the left subtree, the maximum value is updated to the current node's value
        // For the right subtree, the minimum value is updated to the current node's value
        return isBST(node->left, minNode, node) && isBST(node->right, node, maxNode);
    }
};
