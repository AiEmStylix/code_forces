#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int x = 0;
    string temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp.find("++") != string::npos)
            x++;
        if (temp.find("--") != string::npos)
            x--;
    }
    cout << x;
    return 0;
}
