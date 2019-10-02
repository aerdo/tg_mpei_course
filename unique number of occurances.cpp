//https://leetcode.com/problems/unique-number-of-occurrences/
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> uo;
        for (auto i:arr){
            uo[i]++;
        }//создаем контейнер с количеством вхождений каждого числа в массиве
        
        map<int,int> m;
        for (auto i:uo){//пробегаемся по значениям(те что колисетва значений)
            m[i.second]++;//находим количества их вхождений
            if (m[i.second]>1) return false;//если какое-то количество >1 сразу возвращаем false
        }
        return true;
    }
};