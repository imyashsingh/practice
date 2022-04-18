// https://leetcode.com/problems/kth-smallest-element-in-a-bst/
// Kth Smallest Element in a BST



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
    void ksmall(TreeNode* root,int &k,int &ans){
        if(!root)
            return;
        if(k>0){
            ksmall(root->left,k,ans);
            k--;
            if(k==0)
                ans=root->val;
            ksmall(root->right,k,ans);
        }
        
    }
    
    int kthSmallest(TreeNode* root, int k) {
        int ans;
        ksmall(root,k,ans);
        return ans;
    }
};
