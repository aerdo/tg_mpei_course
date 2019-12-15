//https://leetcode.com/problems/range-addition-ii/
class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        //упрощение задачи-найти минимальные области изменений, в них будет наибольший результат
        for (vector<int> mas:ops){
            m=min(m,mas[0]); 
            n=min(n,mas[1]);
        }
        return m*n;
    }
};