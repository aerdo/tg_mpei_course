//https://leetcode.com/problems/leaf-similar-trees/
class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> seq1,seq2;
        trav(root1,seq1);
        trav(root2,seq2);
        return (seq1==seq2);
    }
    void trav(TreeNode* node, vector<int>& seq){
        if (!node) return;
        if(!node->left&&!node->right)
            seq.push_back(node->val);
        trav(node->left, seq);
        trav(node->right, seq);
    }
};