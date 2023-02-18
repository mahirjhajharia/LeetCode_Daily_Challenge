// 226. Invert Binary Tree
// Problem Link - https://leetcode.com/problems/invert-binary-tree/

class Solution {
public:
    void invert(TreeNode* root){
        if(root==NULL){
            return;
        }
        TreeNode* temp=root->left;
        root->left=root->right;
        root->right=temp;
        invert(root->left);
        invert(root->right);
    }
    
    TreeNode* invertTree(TreeNode* root){
        invert(root);
        return root;  
    }
};
