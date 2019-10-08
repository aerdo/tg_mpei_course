//https://leetcode.com/problems/first-unique-character-in-a-string/
class Solution {
public:
    int firstUniqChar(string s) {
        int count[26] = {0};//массив с подсчетом вхождений каждой буквы
        for (int i = 0; i<s.length(); i++)
            count[s[i] - 'a']++;
        
        for (int i = 0; i<s.length(); i++)
            if (count[s[i] - 'a'] == 1)
                return i;//возвращаем первый нужный индекс
        
        return -1;
    }
};