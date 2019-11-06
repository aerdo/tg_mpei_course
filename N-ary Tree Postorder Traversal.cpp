//https://leetcode.com/problems/n-ary-tree-postorder-traversal/
class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> res;
        if (!root) return res;
        trav(root, res);
        return res;
    }
    void trav(Node* node, vector<int>& res){
        for(int i=0; i<node->children.size(); i++)
            trav(node->children[i],res);
        if (node) res.push_back(node->val);
        
        
    }
};