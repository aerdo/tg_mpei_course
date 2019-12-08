//https://leetcode.com/problems/roman-to-integer/
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> m={{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}};
	    int res=m[s.back()];
	    for (int i=0; i<s.size()-1; i++) {
		    if (m[s[i]]<m[s[i+1]]) 
                res-=m[s[i]];
		    else 
                res+=m[s[i]];
	    }
	    return res;
    }
};