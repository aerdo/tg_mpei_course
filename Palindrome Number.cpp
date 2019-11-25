//https://leetcode.com/problems/palindrome-number/
class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0 || x%10==0 && x!=0) return false;
        int reverse=0;
        //перевернем половину числа и если обе части равны, то жто число-палиндром
        while (x>reverse){
            reverse=reverse*10+x%10;
            x/=10;
        }
        //можем отбросить одну цифру если количество цифр исходноо числа нечетно
        return (x==reverse||x==reverse/10);
    }
};