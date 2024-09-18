#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string s1;
    std::cin >> s1;
    int c1, c2, c3;
    c1 = c2 = c3 = 0;
    for (char ch : s1)
    {
        if (ch == '1')
            c1++;
        else if (ch == '2')
            c2++;
        else if (ch == '3')
            c3++;
    }

    // Print the numbers in sorted order (1's first, then 2's, then 3's)
    bool first = true;
    while (c1--)
    {
        if (!first)
            std::cout << "+";
        std::cout << "1";
        first = false;
    }
    while (c2--)
    {
        if (!first)
            std::cout << "+";
        std::cout << "2";
        first = false;
    }
    while (c3--)
    {
        if (!first)
            std::cout << "+";
        std::cout << "3";
        first = false;
    }

    return 0;
}
