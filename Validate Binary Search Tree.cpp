//https://leetcode.com/problems/validate-binary-search-tree/
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        TreeNode *maxNode, *minNode;
        return trav(root, maxNode, minNode);
    }
    bool trav(TreeNode* node, TreeNode* maxNode, TreeNode* minNode){
        if (node){
            if (maxNode && node->val>=maxNode->val)
                return false;
            if (minNode && node->val<=minNode->val)
                return false;
            return trav(node->left, node, minNode)&&trav(node->right, maxNode, node);
        }
        return true;
    }
};