#include <iostream>
using namespace std;
void input(long a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void display(long a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    long arr[1000];
    int n;
    cin >> n;
    input(arr, n);
    display(arr, n);
    return 0;
}
