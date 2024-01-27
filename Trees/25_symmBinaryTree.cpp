class Solution {
public:
    bool f(TreeNode* left, TreeNode*right){
        if(left==NULL || right==NULL) return left==right;
        if(left->val != right->val) return false;
        return f(left->left, right->right) && f(left->right, right->left);
    }

    bool isSymmetric(TreeNode* root) {
        return root==NULL || f(root->left, root->right);
    }
};