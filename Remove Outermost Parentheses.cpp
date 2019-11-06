//https://leetcode.com/problems/remove-outermost-parentheses/
class Solution {
public:
    string removeOuterParentheses(string S) {
        int count=0;
        string res;
        for (char c : S) {
            if (c == '(') {
                if (count++) res += '(';//если встретили ( и count==0, увеличиваем на 1 и записываем (
            } else {
                if (--count) res += ')';//если встретили ) уменьшаем count на 1 и если 0 записываем )   
            }
        }
        return res;
    }
};