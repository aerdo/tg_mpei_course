//https://leetcode.com/problems/keyboard-row/
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> row1{'q','w','e','r','t','y','u','i','o','p','Q','W','E','R','T','Y','U','I','O','P'};
        unordered_set<char> row2{'a','s','d','f','g','h','j','k','l', 'A','S','D','F','G','H','J','K','L'};
        unordered_set<char> row3{'z','x','c','v','b','n','m', 'Z','X','C','V','B','N','M'};
        vector<string> res;
        for (string word:words){
            char check=word[0];
            
            if (row1.count(check)!=0){
                bool fl=true;
                for (int i=1; i<word.size(); i++)
                    if (row1.count(word[i])==0){
                        fl=false;
                        break;
                    }
                if (fl) res.push_back(word);
            }
            
            if (row2.count(check)!=0){
                bool fl=true;
                for (int i=1; i<word.size(); i++)
                    if (row2.count(word[i])==0){
                        fl=false;
                        break;
                    }
                if (fl) res.push_back(word);
            }
            
            if (row3.count(check)!=0){
                bool fl=true;
                for (int i=1; i<word.size(); i++)
                    if (row3.count(word[i])==0){
                        fl=false;
                        break;
                    }
                if (fl) res.push_back(word);
            }
            
        }
        return res;
    }
};