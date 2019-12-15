//https://leetcode.com/problems/maximum-nesting-depth-of-two-valid-parentheses-strings/
class Solution {
public:
    /*представь гистограмму где высота каждого столбца-уровень данной скобки 
    ответ в виде : 0 ... 0 или 1 .... 1-один уровень*/
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> res(seq.size());
        int depth=0;
        for(int i=0; i<seq.size(); i++){
            if (seq[i]=='('){
                depth++;
                res[i]=depth%2;
            }else{
                res[i]=depth%2;
                depth--;
            }
                
        } 
        return res;
    }
};