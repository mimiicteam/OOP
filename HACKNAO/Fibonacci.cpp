#include <iostream>

unsigned long long Fibonacci(int n)
{
    long a1 = 0, a2 = 1, i = 3, a = 0;
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    while (i <= n)
    {
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        i++;
    }
    return a;
}
int main()
{
    int n;
    std::cin >> n;
    std::cout << Fibonacci(n);
    return 0;
}