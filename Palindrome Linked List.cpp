//https://leetcode.com/problems/palindrome-linked-list/
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> vals;
        while (head){
            vals.push_back(head->val);
            head=head->next;
        }
        bool fl=true;
        int i=0;
        while (i<vals.size()/2&&fl)
            if (vals[i]==vals[vals.size()-i-1]) i++;
            else fl=false;
        return fl;
    }
};