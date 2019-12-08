//https://leetcode.com/problems/reverse-linked-list-ii/
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if (!head) return head;
        if (m==n) return head;
        vector<int> vals;
        while (head){
            vals.push_back(head->val);
            head=head->next;
        }
        reverse(vals.begin()+m-1, vals.begin()+n);
        ListNode* ans=new ListNode(0);
        head=ans;
        for (int i=0; i<vals.size(); i++){
            ans->next=new ListNode(vals[i]);
            ans=ans->next;
        }
        return head->next;
    }
};