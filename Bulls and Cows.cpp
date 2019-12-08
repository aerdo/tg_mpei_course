//https://leetcode.com/problems/bulls-and-cows/
class Solution {
public:
    string getHint(string secret, string guess) {
        int bull=0, cow=0, i, n=secret.length();
        vector<int> count(10,0);
        for (int i=0; i<n; i++){
            count[secret[i]-'0']++;
            if (secret[i]==guess[i]) bull++;
        }
        for (int i=0; i<n; i++){
            if (count[guess[i]-'0']>0){
                cow++;
                count[guess[i]-'0']--;
            }
        }
        return (to_string(bull)+"A"+to_string(cow-bull)+"B");
    }
};