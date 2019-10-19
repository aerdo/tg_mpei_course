//https://leetcode.com/problems/next-greater-node-in-linked-list/
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* cur=head;
        vector<int> values;
        while (cur){
            values.push_back(cur->val);
            cur=cur->next;
        }
        int n=values.size();
        vector<int> res(n,0);
        
        stack<int>ms;
        ms.push(values[n-1]);
        
        for(int i=n-2;i>=0;i--){
            if(values[i]<ms.top()){//если i-ый эл-т меньше верхнего в стеке
                res[i]=ms.top();//записываем верхний в стеке
            }
            else{
                while(!ms.empty() && values[i]>=ms.top())//ищем больший элемент в стеке
                    ms.pop();
                
                if (ms.empty()) res[i] = 0;//если не нашли-значит попалчя наибольший, поэтому записываем 0
                else res[i]=ms.top();//если нашли, записываем его
            }
            
            ms.push(values[i]);//добавляем эл-т в стек
        }
        return res;
        
    }
};