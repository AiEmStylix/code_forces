// https://codeforces.com/problemset/problem/791/A
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;
    int years = 0;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        years++;
    }
    cout << years;
    return 0;
}
