class Solution
{
    public:
    vector<int> f(Node* node, int level, vector<int> &ans){
        if(node==NULL) return ans;
        if(ans.size()==level){
            ans.push_back(node->data);
        }
        f(node->right, level+1, ans);
        f(node->left, level+1, ans);
        return ans;
    }
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
        vector<int> ans;
        f(root, 0, ans);
        return ans;
    }
};