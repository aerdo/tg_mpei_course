//https://leetcode.com/problems/ransom-note/
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> magazLetters(26, 0);
        for(char m:magazine)
            magazLetters[m-'a']++;
        for(char r:ransomNote){
            magazLetters[r-'a']--;
            if (magazLetters[r-'a']<0) return false;
        }
        return true;
    }
};