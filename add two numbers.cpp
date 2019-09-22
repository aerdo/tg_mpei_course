//https://leetcode.com/problems/add-two-numbers/
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> m1,m2;
        
        while (l1!=NULL){
            m1.push_back(l1->val);
            l1=l1->next;
        }
        
        while (l2!=NULL){
            m2.push_back(l2->val);
            l2=l2->next;
        }
        
        int n1=m1.size(), n2=m2.size();   
        int n=min(n1,n2);
        
        int sum=0;
        l1=new ListNode(0);
        l2=l1;
        for (int i=0; i<n; i++){
            sum+=m1[i]+m2[i];//находим сумму двух разрядов
            l1->next=new ListNode(sum%10);//записываем mod 10
            l1=l1->next;
            sum/=10;//перекидываем в следующую сумму div 10
        }
        if (n1>n2){//если первый список длинне второго
            for (int i=n2; i<n1; i++){//идем с позиции на которой остановились 
            sum+=m1[i];
            l1->next=new ListNode(sum%10);
            l1=l1->next;
            sum/=10;
            }
        }else{
            if (n2>n1){//если второй длиннее первого
            for (int i=n1; i<n2; i++){
                sum+=m2[i];
                l1->next=new ListNode(sum%10);
                l1=l1->next;
                sum/=10;
                }
            }
            }
        
        if (sum>0){
            l1->next=new ListNode(sum%10);
        }
        return l2->next;
    }
};