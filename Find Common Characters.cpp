//https://leetcode.com/problems/find-common-characters/
class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<int> count(26,INT_MAX);
        vector<string> res;
        for (string s:A){
            vector<int> count2(26,0);
            for (char c:s)
                count2[c-'a']++;//подсчет количества каждых букв в слове
            for (int i=0; i<26; i++)
                count[i]=min(count[i], count2[i]);//записываем минимум тк нам нужно минимальное количество данной буквы во всех словах
        }
        for (int i=0; i<26; i++)
            for (int j=0; j<count[i]; j++)
                res.push_back(string(1,i+'a'));
        return res;
        
    }
};