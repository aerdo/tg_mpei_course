//https://leetcode.com/problems/add-two-numbers/
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* k=new ListNode(0);
        k=l1;
        int n1=0;
        
        while (k->next!=NULL){
            n1++;
            k=k->next;
        }
        
        k=l2;
        int n2=0;
        
        while (k->next!=NULL){
            n2++;
            k=k->next;
        }
        
        ListNode* l=new ListNode(0);
        k=l;
        int n=min(n1,n2), sum=0;
        
        for (int i=0; i<=n; i++){
            sum+=l1->val+l2->val;
            l->next=new ListNode(sum%10);
            sum/=10;
            l=l->next;
            l1=l1->next;
            l2=l2->next;
        } 
        if (n1>n2){
            for (int i=n; i<n1; i++){
                sum+=l1->val;
                l->next=new ListNode(sum%10);
                sum/=10;
                l=l->next;
                l1=l1->next;
            }
        }else{
            if(n2>n1){
                for (int i=n; i<n2; i++){
                sum+=l2->val;
                l->next=new ListNode(sum%10);
                sum/=10;
                l=l->next;
                l2=l2->next;
            }
            }
        }
        if (sum!=0){
            l->next=new ListNode(sum);
        }
        return k->next;   
    }
};