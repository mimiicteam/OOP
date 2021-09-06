#include <iostream>
using namespace std;

int main()
{
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool checkSort1 = true;
    bool checkSort2 = true;
    for (int i = 1; i < n; i++)
    {
        if (a[i] <= a[i - 1])
            checkSort1 = false;
        if (a[i] >= a[i - 1])
            checkSort2 = false;
    }
    if (checkSort1 || checkSort2)
        cout << "YES";
    else
        cout << "NO";
}