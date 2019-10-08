https://leetcode.com/problems/binary-tree-inorder-traversal/
class Solution {//заданный обход NLR, нужен LNR
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> m;
        traversal(root,m);
        return m;
    }
    
    int traversal(TreeNode* root, vector<int>& m){
        if (root){
            traversal(root->left,m);
            m.push_back(root->val);
            traversal(root->right,m);    
        }
        return 0;
    }
};