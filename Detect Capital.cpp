//https://leetcode.com/problems/detect-capital/
class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        bool fl=true;
        int i=1;
        if (word[0]>='A'&&word[0]<='Z'){
            while (i<n&&fl){
                if (word[i]>='a'&&word[i]<='z')
                    i++;
                else fl=false;
            }
            if(!fl&&i==1){
                fl=true;
                while (i<n&&fl){
                if (word[i]>='A'&&word[i]<='Z')
                    i++;
                else fl=false;
                }
            }
        }else{
            while (i<n&&fl){
                if (word[i]>='a'&&word[i]<='z')
                    i++;
                else fl=false;
            }
        }
        return fl;
    }
};