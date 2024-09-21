// https://codeforces.com/problemset/problem/617/A
#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    // Calculate the minimum number of steps directly
    int steps = (x + 4) / 5;

    cout << steps;
    return 0;
}