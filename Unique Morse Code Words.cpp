//https://leetcode.com/problems/unique-morse-code-words/
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> voc={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> s; 
        for (string word:words){//каждое слово из вектора нужно преобразовать
            string w="";
            for (char ch:word) w+=voc[ch-'a'];//преобразуем посимвольно
            s.insert(w);//добавляем в сет
        }
        return s.size();
    }
};