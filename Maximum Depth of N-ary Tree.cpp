//https://leetcode.com/problems/maximum-depth-of-n-ary-tree/
class Solution {
public:
    int maxDepth(Node* root) {
        return findMaxDepth(root, 1);
    }
    
    int findMaxDepth(Node* root, int currentDepth){
        if (!root) return currentDepth-1;
        
        int maxDepth=currentDepth;
        for (Node* child: root->children) //итератор по "детям"
            maxDepth=max(findMaxDepth(child, currentDepth+1), maxDepth);
        return maxDepth;
    }
};