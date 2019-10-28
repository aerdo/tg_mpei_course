//https://leetcode.com/problems/range-sum-of-bst/
class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        if (!root) return 0;
        int res=0;
        if (root->val>=L&&root->val<=R)res+=root->val;
        res+=rangeSumBST(root->right,L,R);
        res+=rangeSumBST(root->left,L,R);
        return res;
    }
};