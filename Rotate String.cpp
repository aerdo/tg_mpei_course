//https://leetcode.com/problems/rotate-string/
class Solution {
public:
    bool rotateString(string A, string B) {
        return A.size()==B.size() && (A+A).find(B)!=A.npos;//find возвращает npos если ничего не находит
    }
};