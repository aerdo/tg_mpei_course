//https://leetcode.com/problems/sum-of-square-numbers/
class Solution {
public:
    bool judgeSquareSum(int c) {
        for (int i=0; i<=sqrt(c/2); i++){
            if (i*i+pow(floor(sqrt(c-i*i)),2)==c) return true;
            //если сумма таких квадратов равна с
        }
        return false;
    }
};