//https://leetcode.com/problems/binary-tree-right-side-view/
class Solution {
public:
    void form(TreeNode* root, int i, vector<int> &res){
        int n=res.size();
        if (i==n) res.push_back(root->val);//чтобы записать крайний правый элемент дерева на уровне 
        i++;//уровень погружения в дерево
        if (root->right) form(root->right,i,res); 
        if (root->left) form(root->left,i,res); 
    }
    
    vector<int> rightSideView(TreeNode* root){
        vector<int> res;
        int i=0; 
        if (root) form(root,i,res); 
                
        return res; 
    }
};