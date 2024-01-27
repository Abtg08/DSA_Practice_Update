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
    int height(TreeNode* root){
        if(root==NULL) return 0;
        int lh= height(root->left);
        int rh= height(root->right);
        return max(lh,rh)+1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int l1= diameterOfBinaryTree(root->left);
        int l2= diameterOfBinaryTree(root->right);
        int l3= height(root->left) + height(root->right);
        return max(l1, max(l2, l3));    
    }
};


class Solution {
public:
    int height(TreeNode* root, int &maxi){
        if(!root) return 0;
        int lh= height(root->left, maxi);
        int rh=height(root->right, maxi);
        maxi= max(maxi, lh+rh);
        return 1+ max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
        height(root, maxi);
        return maxi;
    }
};