//https://leetcode.com/problems/maximum-difference-between-node-and-ancestor/
class Solution {
public:
    int maxAncestorDiff(TreeNode* root) {
        return find(root, root->val, root->val);
    }
    int find(TreeNode* node, int mn, int mx){
        if (!node) return (mx-mn);
        else{
            mn=min(mn,node->val);
            mx=max(mx,node->val);
            return max(find(node->left, mn, mx),find(node->right, mn, mx));
        }
    }
        
};