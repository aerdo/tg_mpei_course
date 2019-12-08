//https://leetcode.com/problems/clone-graph/
class Solution {
public:
    map<Node*, Node*> nodeMap;
    Node* cloneGraph(Node* node){
        if (!node) return NULL;
        Node* newNode=new Node(node->val);
        nodeMap[node]=newNode;
        for (auto &neighbor:node->neighbors){
            if (nodeMap.count(neighbor))
                newNode->neighbors.push_back(nodeMap[neighbor]);
            else {
                Node* newNeighbor=cloneGraph(neighbor);
                newNode->neighbors.push_back(newNeighbor);
            }
        }
        return newNode;
    }
};