#include <iostream>
using namespace std;

int main()
{
    int n, m, a[100], b[100], c[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] >= b[j])
            {
                int tmp = a[i];
                a[i] = b[j];
                b[j] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i] << " " << b[j] << " ";
        }
    }
}