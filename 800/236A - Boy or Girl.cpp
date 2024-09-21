// https://codeforces.com/problemset/problem/236/A
#include <iostream>
#include <set>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    set<char> distinctChar(s.begin(), s.end());
    if (distinctChar.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
    return 0;
}
