//https://leetcode.com/problems/path-sum/
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if (!root) return false;
        if(!(root->left)&&!(root->right)&&(root->val == sum)) return true;
        return (hasPathSum(root->left, sum-root->val) || hasPathSum(root->right, sum-root->val));
    }//при каждом обходе уменьшаем данное число, если последний элемент в ветке равен полученному числу, путь найден
};