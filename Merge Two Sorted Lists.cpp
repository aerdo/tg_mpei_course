//https://leetcode.com/problems/merge-two-sorted-lists/
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (!l1) return l2;
        if (!l2) return l1;
        vector<int> v1,v2;
        while (l1){
            v1.push_back(l1->val);
            l1=l1->next;
        }
        while (l2){
            v2.push_back(l2->val);
            l2=l2->next;
        }
        for (int i=0; i<v2.size(); i++) 
            v1.push_back(v2[i]);
        sort(v1.begin(), v1.end());
        l1=new ListNode(v1[0]);
        l2=l1;
        for (int i=1; i<v1.size(); i++){
            l1->next=new ListNode(v1[i]);
            l1=l1->next;
        }
        return l2;
    }
};