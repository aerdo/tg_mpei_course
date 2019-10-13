//https://leetcode.com/problems/split-linked-list-in-parts/
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        vector<ListNode*> res;
        
        ListNode* cur=root;//подсчет количества элементов в списке
        int l=0;
        while(cur){
            cur=cur->next;
            l++;
        }
            
        int m=l%k;//"with size difference at most 1"
        int n=l/k;//длина одной цепочки
        
        ListNode* head=new ListNode(0), *pre=root, *tail;
        
        while(k!=0){
            cur=head;
            cur->next=pre;
            for(int i=0; i<n; i++)
                cur=cur->next;
            if(m!=0){
                cur=cur->next;
                m--;
            }
            tail=cur->next;//сохраняем хвост
            cur->next=NULL;//обрубаем
            
            res.push_back(pre);//записываем что осталось (не с нуля)
            
            pre=tail;
            k--;
        }
        return res;
    }
};