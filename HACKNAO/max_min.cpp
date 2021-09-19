#include <iostream>

int main()
{
    int n, a[100];
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    int max = a[0];
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        a[i] > max ? max = a[i] : a[0];
        a[i] < min ? min = a[i] : a[0];
    }

    std::cout << max << " " << min << std::endl;
}