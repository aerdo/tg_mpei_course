//https://leetcode.com/problems/length-of-last-word/
class Solution {
public:
    int lengthOfLastWord(string s) {
         if (s == "") return 0;
        int n=s.length(), count=0;
        for (int i=n-1; i>=0; i--){
            if (s[i]!=' '){//если крайний элемент не пробел
                //если пробел идем назад
                while (i>=0 && s[i--]!=' ') count++;//пока не нашли пробел идем назад и считаем
                return count;
            }
        }
        return count;  
    }
};