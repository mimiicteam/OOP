#include <iostream>
using namespace std;
int main()
{
    int n, a[100];
    cin >> n;
    int b[10];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 10; i++)
    {
        b[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        b[a[i]]++;
    }

    for (int i = 0; i < 10; i++)
    {
        if (b[i] != 0)
        {
            cout << i << " - " << b[i] << "; ";
        }
    }
}