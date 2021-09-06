#include <iostream>
using namespace std;

int main()
{
    int n, a[100], index;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> index;
    if (index >= 0 && index <= n)
    {
        for (int i = index; i < n; i++)
        {
            a[i] = a[i + 1];
        }
        n--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}