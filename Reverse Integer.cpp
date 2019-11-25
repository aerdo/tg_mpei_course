//https://leetcode.com/problems/reverse-integer/
class Solution {
public:
    int reverse(int x) {
        int res=0;
        while (x!=0){
            int temp=x%10;
            x/=10;
            //INT_MAX= 2 147 483 647
            //INT_MIN=-2 147 483 648
            if (res>INT_MAX/10 || res==INT_MAX/10 && temp>7 ) return 0;
            //если при умножении на 10 или при прибавлении цифры будет превышение 
            if (res<INT_MIN/10 || res==INT_MIN/10 && temp<-8 ) return 0;
            //аналогично если при умножении на 10 или вычитании -8 будет превышение
            res=res*10+temp;
        }
        return res;
    }
};