//https://leetcode.com/problems/minimum-depth-of-binary-tree/
class Solution {
public:
    int minDepth(TreeNode* root) {
        if (!root) return 0;
        if (root->left && root->right) return min(minDepth(root->left), minDepth(root->right))+1;//если не лист прибавляем 1 и дальше ищем минимальное количество
        return max(minDepth(root->left), minDepth(root->right))+1;
    }
};