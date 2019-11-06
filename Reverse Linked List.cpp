//https://leetcode.com/problems/reverse-linked-list/
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head) return head;
        vector<int> vals;
        while (head){
            vals.push_back(head->val);
            head=head->next;
        }
        head=new ListNode(vals[vals.size()-1]);
        ListNode* res=head;
        for (int i=vals.size()-2; i>=0; i--){
            head->next=new ListNode(vals[i]);
            head=head->next;
        }
        return res;
    }
};