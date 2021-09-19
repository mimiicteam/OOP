#include <iostream>
#include <cmath>
using namespace std;

void input(long arr[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

void display(long arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

bool isPrime(int value)
{
    if (value < 2)
        return false;
    for (int i = 2; i <= sqrt(value); i++)
        if (value % i == 0)
            return false;
    return true;
}

void remove(long a[], int n, int index)
{
    for (int i = index; i < n; i++)
    {
        a[i] = a[i + 1];
    }
}

int removePrimes(long arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n;)
    {
        if (isPrime(arr[i]))
        {
            count++;
            remove(arr, n, i);
        }
        else
            i++;
    }
    return count;
}

int main()
{
    long arr[10000];
    int n = 0;
    cin >> n;
    input(arr, n);
    int removedPrimes = removePrimes(arr, n);
    n = n - removedPrimes;
    display(arr, n);
    return 0;
}
