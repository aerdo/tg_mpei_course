//https://leetcode.com/problems/maximum-binary-tree/
class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return construct(nums, 0, nums.size());
    }
    
    TreeNode* construct(vector<int>& nums, int l, int r){
        if (l==r) return NULL;
        int i=max(nums,l,r);
        TreeNode* root= new TreeNode(nums[i]);
        root->left=construct(nums, l, i);
        root->right=construct(nums, i+1, r);
        return root;
    }
    int max(vector<int>& nums, int l, int r){
        int maxi=l;
        for (int i=l; i<r; i++) 
            if (nums[i]>nums[maxi]) maxi=i;
        return maxi;
    }
};