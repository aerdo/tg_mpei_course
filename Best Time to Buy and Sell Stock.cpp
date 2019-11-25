//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=INT_MAX, maxprofit=0;
        for (int i=0; i<prices.size(); i++){
            if (prices[i]<minprice)//если цена меньше минимальной
                minprice=prices[i];//сохраняем
            else if (prices[i]-minprice>maxprofit)//иначе если разность текущей и минимальной цен больше максимальной прибыли
                maxprofit=prices[i]-minprice;//сохраняем
        }
            return maxprofit;
        
    }
};