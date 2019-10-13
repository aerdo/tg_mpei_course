//https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        if (n==0) return NULL;
        TreeNode* node=new TreeNode(nums[n/2]);//берем элемент из середины
        node->left=add(nums,0,n/2);//ввод первой половины массива
        node->right=add(nums,n/2+1,n);//ввод второй половины массива
        return node;
    }
    
    TreeNode* add(vector<int>& nums, int b, int e){
        int n=e-b;//длина части массива
        if (n<=0) return NULL;
        TreeNode* node=new TreeNode(nums[b+n/2]);//создание корня с элементом из "середины"
        node->left=add(nums,b,b+n/2);//ввод первой половины массива
        node->right=add(nums,b+n/2+1,b+n);//ввод второй половины массива
        return node;
    }
};