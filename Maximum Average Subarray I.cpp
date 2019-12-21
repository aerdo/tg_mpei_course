//https://leetcode.com/problems/maximum-average-subarray-i/
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        for (int i=0; i<k; i++)
            sum+=nums[i];
        double res=sum;
        for (int i=k; i<nums.size(); i++){
            //удаляем из суммы крайний левый элемент и добавляем крайний правый, выбираем максимум
            sum+=nums[i]-nums[i-k];
            res=max(res,sum);
        }
        return res/k;
    }
};