#include <iostream>
#include <math.h>
using namespace std;

bool checkSNT(int value)
{
    if (value < 2)
        return false;
    for (int i = 2; i <= sqrt(value); i++)
    {
        if (value % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (checkSNT(a[i]))
        {
            cout << a[i] << " ";
        }
    }
}