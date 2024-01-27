class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL) return result;
        queue<TreeNode*> q;
        q.push(root);
        bool leftRight= true;
        while(!q.empty()){
            int s= q.size();
            vector<int> rows(s);
            for(int i=0; i<s; i++){
                TreeNode* node= q.front();
                q.pop();
                int index= leftRight ? i:(s-1-i);
                rows[index]= node->val;
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            leftRight = !leftRight;
            result.push_back(rows); 
        }
        return result;
    }
};