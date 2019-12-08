//https://leetcode.com/problems/add-digits/
class Solution {
public:
    int addDigits(int num) {
        if (num%10==num) return num;
        string t=to_string(num);
        int res;
        while (t.size()!=1){
            int temp=0;
            for (char c:t)
                temp+=c-'0';
            res=temp;
            t=to_string(temp);
        }
        return res;
    }
};