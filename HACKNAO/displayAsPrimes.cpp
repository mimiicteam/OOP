#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(long n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void displayAsPrimes(long n)
{
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0 && isPrime(i))
        {
            cout << i << "*";
            n /= i;
        }
    }
    cout << "\b";
}
int main()
{
    long n;
    cin >> n;
    displayAsPrimes(n);
    return 0;
}
