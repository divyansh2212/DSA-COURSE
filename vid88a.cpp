// Mamx Profit in Stocks

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> stockPrices = {5, 2, 6, 1, 4};
    int maxmprofit = INT_MIN;
    int minmSoFar = INT_MAX;
    for (int i = 0; i < stockPrices.size(); i++)
    {
        minmSoFar = min(minmSoFar, stockPrices[i]);
        int profit = stockPrices[i] - minmSoFar;
        maxmprofit = max(maxmprofit, profit);
    }
    cout << maxmprofit;
    return 0;
}