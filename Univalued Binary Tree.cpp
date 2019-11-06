//https://leetcode.com/problems/univalued-binary-tree/
class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        if (!root) return false;
        vector<int> vals;
        trav(root,vals);
        for (int i=0; i<vals.size()-1; i++){
            if (vals[i]!=vals[i+1]) return false;
        }
        return true;
        
    }
    void trav(TreeNode* root, vector<int>& vals){
        if (root) {
            vals.push_back(root->val);
            trav(root->left,vals);
            trav(root->right,vals);
        }
    }
};