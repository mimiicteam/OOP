#include <iostream>
using namespace std;
long countDigits(long n)
{
    int arr[10] = {0}, du = 0, count = 0;
    while (n > 0)
    {
        du = n % 10; // du = 2
        n = n / 10;  // 11
        arr[du]++;   // 1
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > 0) //
            count++;
    }
    return count;
}
int main()
{
    long n;
    cin >> n; //112
    cout << countDigits(n);
}

//0 1 2 3 4 5 6 7 8 9