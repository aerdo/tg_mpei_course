//https://leetcode.com/problems/binary-tree-maximum-path-sum/
class Solution {
public:
    int maxPathSum(TreeNode* root){
        int maxSum=INT_MIN;
        trav(root, maxSum);
        return maxSum;//вернем сразу максимальную сумму
    }
    
    int trav(TreeNode* root, int& maxSum){
        if(!root) return 0;
        int lMax=max(0, trav(root->left, maxSum));//ищем максимальную сумму по левой ветке
        int rMax=max(0, trav(root->right, maxSum));//ищем максимум по правой ветке
        //если значение элемента отрицатеьное, его не учитываем (поэтому сравниваем с 0)
        maxSum=max(maxSum, lMax+rMax+root->val);//сравниваем уже имеющуюся сумму с суммой максимумов по левой и правой веткам
        return max(lMax, rMax)+root->val;
        //возвращаемое значение может быть меньше maxSum тк root->val может быть меньше нуля
        //а если оно больше нуля-оно уже содержится в maxSum
    }
};