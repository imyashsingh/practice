// https://leetcode.com/problems/increasing-order-search-tree/
// Increasing Order Search Tree




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
    TreeNode* temp=NULL;
    void inorder(TreeNode* root){
        if(!root)
            return;
        inorder(root->left);
        root->left=NULL;
        temp->right=root;
        temp=root;
        inorder(root->right);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* ans = new TreeNode(0);
        temp=ans;
        inorder(root);
        return ans->right;
    }
};


