//https://leetcode.com/problems/sum-of-even-numbers-after-queries/
class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        int s=0;
        for (int i=0; i<A.size(); i++)
            if (A[i]%2==0) s+=A[i];
        vector<int> res;
        for (int i=0; i<queries.size(); i++){
            if (A[queries[i][1]]%2==0) s-=A[queries[i][1]];//если элемент четный вычтем из суммы
            A[queries[i][1]]+=queries[i][0];//изменим
            if (A[queries[i][1]]%2==0) s+=A[queries[i][1]];//если полученный элемент четный-прибавим
            //если он нечетный-в результирующей сумме все равно не будет учитываться
            res.push_back(s);
        }
        return res;
    }
};