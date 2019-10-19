//https://leetcode.com/problems/symmetric-tree/
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return check(root,root);
    }
    bool check(TreeNode* r1, TreeNode* r2){
        if (!r1&&!r2) return true;
        if (!r1||!r2) return false;
        
        if (r1->val==r2->val) return check(r1->right,r2->left)&&check(r1->left,r2->right);
        else return false;
    }
};