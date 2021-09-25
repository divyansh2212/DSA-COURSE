// Maxm Profit in multiple Stocks

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> stockprices = {5, 2, 6, 1, 4, 7, 3, 6};
    int profit = 0;
    for (int i = 1; i < stockprices.size(); i++)
    {
        if (stockprices[i] > stockprices[i - 1])
        {
            profit += stockprices[i] - stockprices[i - 1];
        }
    }
    cout << profit << endl;
    return 0;
}