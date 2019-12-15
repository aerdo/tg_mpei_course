//https://leetcode.com/problems/add-one-row-to-tree/
class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        if (d==1){
            TreeNode* newTree=new TreeNode(v);
            newTree->left=root;
            return newTree;
        }
        add(v,root,1,d);
        return root;
    }
    void add(int v, TreeNode* root, int curD, int d){
        if (!root)
            return;
        if (curD==d-1){
            TreeNode* temp=root->left;
            root->left=new TreeNode(v);
            root->left->left=temp;
            
            temp=root->right;
            root->right=new TreeNode(v);
            root->right->right=temp;
        }else{
            add(v,root->left, curD+1, d);
            add(v,root->right, curD+1, d);
        }
    }
};