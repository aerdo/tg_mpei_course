//https://leetcode.com/problems/can-place-flowers/
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i=0, count=0, l=flowerbed.size();
        while (i<l){
            if (flowerbed[i]==0 && (i==0 || flowerbed[i-1]==0) && (i==l-1 || flowerbed[i+1]==0)){
                flowerbed[i]=1;
                count++;
            }
            i++;
        }
        return count>=n;
    }
};