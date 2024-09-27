// https://codeforces.com/problemset/problem/116/A

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int capacity = 0;
    int max_capacity = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        capacity -= a;
        capacity += b;
        max_capacity = max(capacity, max_capacity);
    }
    cout << max_capacity;
    return 0;
}

