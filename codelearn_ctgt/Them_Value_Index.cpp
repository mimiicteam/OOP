#include <iostream>
using namespace std;

int main()
{
    int n, a[100], index, value;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> index >> value;
    if (index == n)
    {
        a[n] = value;
        n++;
    }
    else
    {
        for (int i = value; i > index; i--)
        {
            a[i] = a[i - 1];
            cout << a[i] << endl;
        };
        a[index] = value;
        n++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}