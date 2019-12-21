//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/
class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int res=0, hold=(-1)*prices[0];//res максимальная выгода если бы не совершили покупку, hold-если бы совершили
        for (int i=1; i<prices.size(); i++){
            res=max(res,hold+prices[i]-fee);
            hold=max(hold, res-prices[i]);
        }
        return res;
    }
};