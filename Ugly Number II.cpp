//https://leetcode.com/problems/ugly-number-ii/
class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> temp(n);
        temp[0]=1;
        int p2=0, p3=0, p5=0;
        for(int i=1; i<n; i++){
            temp[i]=min(temp[p2]*2, min(temp[p3]*3, temp[p5]*5));
            if(temp[i]==temp[p2]*2) p2++;
            if(temp[i]==temp[p3]*3) p3++;
            if(temp[i]==temp[p5]*5) p5++;
        }
        return temp[n-1];
    }
};