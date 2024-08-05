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
    int maxDepth(TreeNode* root) {
        //always check if the tree is empty
        if(root == nullptr){
            return 0;
        }
        else {
            //compute the length of each subtree
            int leftDepth = maxDepth(root->left);
            int rightDepth = maxDepth(root->right);
            //use the larger one
            return 1 + max(leftDepth, rightDepth);
        }

        
    }
};