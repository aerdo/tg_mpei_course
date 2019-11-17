//https://leetcode.com/problems/student-attendance-record-i/
class Solution {
public:
    bool checkRecord(string s) {
        bool absentBefore=false, late=false;
        for (int i=0; i<s.size(); i++){
            if (s[i]=='A'){
                if(!absentBefore) absentBefore=true;
                else return false;//если уже опаздывал
            }
            if (s[i]=='L' && (i-2>=0 && s[i-1]=='L' && s[i-2]=='L'))//если три опоздания подряд 
                return false;
        }
        return true;
    }
};