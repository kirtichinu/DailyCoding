//best time to buy and sell stock I
#include<stdio.h>
#include<stdlib.h>

int maxProfit(int* prices, int pricesSize) {

    if (pricesSize <= 1) {
        return 0;
    }
    int min_price = prices[0];
    int max_profit = 0;
    for (int i = 1; i < pricesSize; i++) {

        if (prices[i] < min_price) {
            min_price = prices[i];
        } else {
            int profit = prices[i] - min_price;
            if (profit > max_profit) {
                max_profit = profit;
            }
        }
    }
    return max_profit;
}
int main()
{
    int prices[]= {7,1,5,3,6,4};
    int pricesSize = (sizeof(prices))/(sizeof(prices[0]));
    int result= maxProfit(prices, pricesSize);
    printf("Maximum profit = %d ",result);
    return 0;
}