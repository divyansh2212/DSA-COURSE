#include <iostream>
using namespace std;
int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
int setBit(int n, int pos)
{
    return (n | (1 << pos));
}
int clearBit(int n, int pos)
{
    return (n & ~(1 << pos));
}
int updateBit(int n, int pos, int val)
{
    n = (n & ~(1 << pos));     // Clear Bit
    return (n | (val << pos)); // Set Bit
}
int main()
{
    cout << getBit(5, 2) << endl;       // To get bit of num n at ith pos
    cout << setBit(5, 1) << endl;       // To set bit to 1 at ith pos
    cout << clearBit(5, 2) << endl;     // To set bit to 0 at ith position
    cout << updateBit(5, 1, 1) << endl; // Clear Bit + Set Bit (To update the bit \
    at ith postion with the given 'val')
    return 0;
}