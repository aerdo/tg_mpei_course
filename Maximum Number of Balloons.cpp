//https://leetcode.com/problems/maximum-number-of-balloons/
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> temp(5);
        // a b 2l n 2o
        for (int i=0; i<text.size(); i++){
            if (text[i]=='a') temp[0]++;
            if (text[i]=='b') temp[1]++;
            if (text[i]=='l') temp[2]++;
            if (text[i]=='n') temp[3]++;
            if (text[i]=='o') temp[4]++;  
        }
        if (temp[0]==0||temp[1]==0||temp[2]==0||temp[3]==0||temp[4]==0) return 0;
        temp[2]/=2; temp[4]/=2;
        return min(min(min(temp[0],temp[1]), min(temp[1],temp[2])), min(min(temp[2],temp[3]), min(temp[3],temp[4])));
    }
};