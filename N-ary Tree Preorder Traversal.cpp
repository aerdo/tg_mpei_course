//https://leetcode.com/problems/n-ary-tree-preorder-traversal/
class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> res;
        if (!root) return res;
        trav(root, res);
        return res;
    }
    void trav(Node* node, vector<int>& res){
        if (node) res.push_back(node->val);
        for(int i=0; i<node->children.size(); i++)
            trav(node->children[i],res);
    }
};