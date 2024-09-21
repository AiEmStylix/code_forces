// https://codeforces.com/problemset/problem/546/A
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int k, n, w;
    cin >> k >> n >> w;
    int price = 0;
    for (int i = 0; i < w; i++)
    {
        price += k * (i + 1);
    }
    if (price - n <= 0)
    {
        cout << 0;
    }
    else
    {
        cout << price - n;
    }
    return 0;
}
