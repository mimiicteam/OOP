#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    int a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << pow(a[i], 2) << " ";
    };
};