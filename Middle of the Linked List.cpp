//https://leetcode.com/problems/middle-of-the-linked-list/
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if (!head) return head;
        int size=0;
        ListNode* temp=head;
        while (temp){
            size++;
            temp=temp->next;
        }
        size/=2;
        for (int i=0; i<size; i++)
            head=head->next;
        return head;
    }
};