//https://leetcode.com/problems/recover-a-tree-from-preorder-traversal/
class Solution {
public:
    TreeNode* recoverFromPreorder(string S) {
        int i=0;
        return convert(S, i, 0); 
    }
    TreeNode* convert(string& s, int& i, int n){
        int j=0;
        while (s[i+j]=='-') j++;
        if (j!=n) return nullptr;
        i+=j;
        int k=0;
        while (isdigit(s[i])){
            k=k*10+s[i]-'0';
            i++;
        }
        TreeNode* r=new TreeNode(k);
        r->left=convert(s, i, n+1);
        r->right=convert(s, i, n+1);
        return r;
    }    
};