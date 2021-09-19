#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int sum = 0;
    while (n > 0)
    {
        int x = n % 10;
        n = n / 10;
        sum += x;
    }
    std::cout << sum << std::endl;
}