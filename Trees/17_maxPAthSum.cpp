class Solution {
public:
    int height(TreeNode* root, int &maxi){
        if(root==NULL) return 0;
        int lh= height(root->left, maxi);
        int rh= height(root->right, maxi);
        maxi= max(maxi, lh+rh+root->val);
        return (root->val)+ max(lh, rh);
    }

    int maxPathSum(TreeNode* root) {
        int maxi=0;
        height(root,maxi);
        return maxi;
    }
};

/* The above solution won't work on NEGATIVE nos and won't consider sub nodes, ie,
 if the nodes are the one's with negative values*/


class Solution {
public:
    int height(TreeNode* root, int &maxi){
        if(root==NULL) return 0;
        int lftSum= max(0, height(root->left, maxi));
        int ritSum= max(0, height(root->right, maxi));
        maxi= max(maxi, lftSum + ritSum + root->val);
        return (root->val)+ max(lftSum, ritSum);
    }

    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        height(root,maxi);
        return maxi;
    }
};