// https://codeforces.com/problemset/problem/59/A
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    int countUpper = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            countUpper++;
        else
            countUpper--;
    }
    if (countUpper <= 0)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s;
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s;
    }
    return 0;
}
