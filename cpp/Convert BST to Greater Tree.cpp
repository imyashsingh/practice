// https://leetcode.com/problems/convert-bst-to-greater-tree/
// Convert BST to Greater Tree




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
    int cursum=0;
    void bst(TreeNode* root){
        if(!root)
            return;
        if(root->right)
            bst(root->right);
        cursum+=root->val;
        root->val=cursum;
        if(root->left)
            bst(root->left);
    } 
    
    TreeNode* convertBST(TreeNode* root) {
        bst(root);
        return root;
    }
};
