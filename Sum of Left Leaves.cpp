//https://leetcode.com/problems/sum-of-left-leaves/
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        trav(root, sum, false);
        return sum;
        
    }
    void trav(TreeNode* root, int &sum, bool flag) {
        if (!root) return;
        if (flag && root && !root->left && !root->right) {
            sum+=root->val;
            return;
        }
        trav(root->left, sum, true);
        trav(root->right, sum, false);
        return;
    }
};