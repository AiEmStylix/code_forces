// https://codeforces.com/problemset/problem/677/A

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, h;
    cin >> n >> h;
    int width = 0;
    while (n--)
    {
        int a;
        cin >> a;
        if (a <= h)
        {
            width++;
        }
        else
        {
            width += 2;
        }
    }
    cout << width;
    return 0;
}
