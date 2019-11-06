//https://leetcode.com/problems/diameter-of-binary-tree/
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int res=1;
        depth(root,res);
        return res-1;
    }
    int depth(TreeNode* root, int& res){
        if (!root) return 0;
        int L=depth(root->left,res);
        int R=depth(root->right,res);
        res=max(res,L+R+1);
        return max(L,R)+1;
    }
    
};