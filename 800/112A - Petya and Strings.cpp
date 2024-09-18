// https://codeforces.com/problemset/problem/112/A
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    // Get the string input
    string s1, s2;
    cin >> s1 >> s2;

    // Convert the string to lowercase
    std::transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    std::transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    // Print the result based on condition
    if (s1 == s2)
    {
        cout << 0;
    }
    else if (s1 > s2)
    {
        cout << 1;
    }
    else
    {
        cout << -1;
    }
    return 0;
}
