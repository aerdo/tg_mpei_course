//https://leetcode.com/problems/to-lower-case/
class Solution {
public:
    string toLowerCase(string str) {
        int n=str.size();
        for (int i=0; i<n; i++){
            if (str[i] >= 'A' && str[i] <= 'Z') {
		str[i] = str[i] + 32;
		}
        }
        return str;
    }
};