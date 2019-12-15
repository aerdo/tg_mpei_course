//https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int> vals;
        while (head){
            vals.push_back(head->val);
            head=head->next;
        }  
        if (vals.size()==0) return 0;
        reverse(vals.begin(), vals.end());
        int res=0;
        for (int i=0; i<vals.size(); i++)
            res+=vals[i]*pow(2,i);
        return res;
    }
};