//https://leetcode.com/problems/remove-linked-list-elements/
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (!head) return head;
        ListNode* ans=new ListNode(0);
        ListNode* temp=ans;
        while (head){
            if (head->val!=val){
                ans->next=new ListNode(head->val);
                ans=ans->next;
            }
                
            head=head->next;
        }
        return temp->next;
    }
};