#include <iostream>

int main()
{
    int n, a[100];
    int count = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i + 1] - a[i] == 1)
            count++;
    }

    std::cout << count << std::endl;
}