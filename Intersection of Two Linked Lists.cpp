//https://leetcode.com/problems/intersection-of-two-linked-lists/
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return nullptr;
        ListNode* curA=headA, *curB=headB;
        while(curA && curB && curA!=curB) {
            curA=curA->next;
            curB=curB->next;
            if (curA==curB) return curA;//если пересеклись-возвращаем элемент на котором пересеклись
            if (!curA) curA=headB;
            if (!curB) curB=headA;
        }
        return curA;
    }
};