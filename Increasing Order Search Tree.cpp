//https://leetcode.com/problems/increasing-order-search-tree/
class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> vals;
        trav(root, vals);
        TreeNode* res=new TreeNode(0), *cur=res;
        for (int v:vals){
            cur->right=new TreeNode(v);
            cur=cur->right;
        }
        return res->right;
    }
    void trav(TreeNode* node, vector<int>& vals){
        if (!node) return;
        trav(node->left, vals);
        vals.push_back(node->val);
        trav(node->right, vals);
    }
};