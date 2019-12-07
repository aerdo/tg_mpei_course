//https://leetcode.com/problems/find-bottom-left-tree-value/
class Solution {
public:
    void trav(TreeNode* root, int& maxDepth, int& leftVal, int depth) {
        if (!root) return;
        trav(root->left, maxDepth, leftVal, depth+1);
        trav(root->right, maxDepth, leftVal, depth+1);
        if (depth>maxDepth) {
            maxDepth=depth;
            leftVal=root->val;
        }
    }

    int findBottomLeftValue(TreeNode* root) {
        int maxDepth=0, leftVal=root->val;
        trav(root, maxDepth, leftVal, 0);
        return leftVal;
    }
};