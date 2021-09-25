#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> blocks = {3, 1, 2, 4, 0, 1, 3, 2};
    int watertrapped = 0;

    vector<int> leftarr(blocks.size());
    leftarr[0] = blocks[0];
    for (int i = 1; i < blocks.size(); i++)
    {
        leftarr[i] = max(leftarr[i - 1], blocks[i]);
    }

    vector<int> rightarr(blocks.size());
    rightarr[blocks.size() - 1] = blocks[blocks.size() - 1];
    for (int i = blocks.size() - 2; i >= 0; i--)
    {
        rightarr[i] = max(rightarr[i + 1], blocks[i]);
    }

    for (int i = 0; i < blocks.size(); i++)
    {
        watertrapped += min(leftarr[i], rightarr[i]) - blocks[i];
    }

    cout << watertrapped << endl;
    return 0;
}