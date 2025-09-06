// best time to buy and sell stocks II
#include <stdio.h>
#include <stdlib.h>
int maxProfit(int *prices, int pricesSize)
{
    if (pricesSize <= 1)
    {
        return 0;
    }
    int profit = 0;
    for (int i = 0; i < pricesSize - 1; i++)
    {
        if (prices[i] < prices[i + 1])
        {
            profit += prices[i + 1] - prices[i];
        }
    }
    return profit;
}
int main()
{
    int prices[] = {7, 1, 5, 3, 6, 4};
    int pricesSize = sizeof(prices) / sizeof(prices[0]);
    int result = maxProfit(prices, pricesSize);
    printf("Maximum Profit = %d", result);
    return 0;
}