//https://leetcode.com/problems/partition-array-into-three-parts-with-equal-sum/
class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        int sum=0;
        for (int i=0; i<A.size(); i++)
            sum+=A[i];
        if (sum%3!=0) return false;
        sum=sum/3;
        int count=3, tempSum=0;
        for (int i=0; i<A.size(); i++){
            tempSum+=A[i];
            if (tempSum==sum){
                count--;
                tempSum=0;
            }
        }
        
        return (count == 0);
    }
};