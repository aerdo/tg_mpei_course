//https://leetcode.com/problems/distribute-candies/
class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        sort(candies.begin(), candies.end());
        int count=1;
        for (int i=1; i<candies.size(); i++){
            if (count>=candies.size()/2) break;
            if (candies[i]>candies[i-1])
                count++;
        }
            
        return count;
    }
};