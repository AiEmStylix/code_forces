// https://codeforces.com/problemset/problem/112/A
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 > s2)
    {
        cout << 1;
    }
    else
    {
        cout << -1;
    }
    return 0;
}
