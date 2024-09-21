// https://codeforces.com/problemset/problem/266/A
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int removedStones = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
            removedStones++;
    }
    cout << removedStones;
    return 0;
}
