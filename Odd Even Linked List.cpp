//https://leetcode.com/problems/odd-even-linked-list/
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head==NULL) return NULL;
        if (head->next==NULL) return head;
        
        ListNode* odd=head,* even=head->next,* b=even;
        while (odd->next && even->next){
            odd->next=odd->next->next;//делаем 2 цепочки
            even->next=even->next->next;//из нечетных и четных
            
            if(odd->next!=NULL)
                odd=odd->next;
            if(even->next!=NULL)
                even=even->next;
        }
        odd->next=b;//сливаем
        return head;
    }
};