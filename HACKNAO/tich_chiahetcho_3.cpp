#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        std::cin >> a[i];
    bool res = false;
    for (int i = 0; i < n; i++)
        if (a[i] % 3 == 0)
        {
            res = true;
            break;
        }
    if (res == true)
        std::cout << "YES";
    else
        std::cout << "NO";
    return 0;
}