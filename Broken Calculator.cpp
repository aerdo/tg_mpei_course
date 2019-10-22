//https://leetcode.com/problems/broken-calculator/
class Solution {
public:
    int brokenCalc(int X, int Y) {
        int ans=0;//метод от обратного 
        while (Y>X){
            ans++;
            if (Y%2==1) Y++;//если нечетное делаем четным (эквивалентно x-1)
            else Y/=2;//иначе делим на 2 (эквивалентно x*2)
        }
        return ans+X-Y;//(X-Y столько раз нужно отнять 1)
    }
};