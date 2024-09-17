// https://codeforces.com/problemset/problem/263/A
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[5][5];
    int m, n;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                m = i + 1;
                n = j + 1;
            }
        }
    }
    cout << abs(3 - m) + abs(3 - n);
}
