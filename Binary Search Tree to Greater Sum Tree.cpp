//https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/
class Solution {
public:
    TreeNode* bstToGst(TreeNode* root) {
        trav(root, 0);
        return root;
    }
    int trav(TreeNode* root, int sum) {
        if (root==NULL) return sum;
        sum=root->val=root->val+trav(root->right, sum);
        return trav(root->left, sum);
    }
};