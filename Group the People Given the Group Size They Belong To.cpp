//https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to/
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> res, groups(groupSizes.size()+1);
        for (int i=0; i<groupSizes.size(); i++) {
            groups[groupSizes[i]].push_back(i);//определеяем человека в соотв группу
            if (groups[groupSizes[i]].size()==groupSizes[i]) {//если группа заполнилась
                res.push_back({});                      //создаем новую
                swap(res.back(), groups[groupSizes[i]]);//
            }
        }
        return res;
        
        
    }
};