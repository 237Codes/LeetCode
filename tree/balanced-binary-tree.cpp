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
    // Helper function to calculate the height of a tree
    int getHeight(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        // Recursively calculate the height of the left and right subtrees
        int leftHeight = getHeight(root->left);
        int rightHeight = getHeight(root->right);
        // Return the maximum height between the left and right subtrees, plus 1 for the current node
        return 1 + max(leftHeight, rightHeight);
    }
    
    // Main function to check if the tree is height-balanced
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) {
            // An empty tree is always height-balanced
            return true;
        }
        
        // Calculate the height of the left and right subtrees
        int leftHeight = getHeight(root->left);
        int rightHeight = getHeight(root->right);
        
        // Check if the left and right subtrees are balanced, and their height difference is <= 1
        if (abs(leftHeight - rightHeight) <= 1 && isBalanced(root->left) && isBalanced(root->right)) {
            return true;
        }
        
        // If any of the conditions fails, the tree is not height-balanced
        return false;
    }
};
