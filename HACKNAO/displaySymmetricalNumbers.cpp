#include <iostream>
using namespace std;
void input(long arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
// Display sysmmetrical numbers from an array
void displayCount(long arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int tmp = arr[i];
        int symmetricalNumbers = 0;
        while (tmp != 0)
        {
            symmetricalNumbers = symmetricalNumbers * 10 + tmp % 10;
            tmp = tmp / 10;
        }
        if (symmetricalNumbers == arr[i])
        {
            count++;
        }
    }
    cout << count << endl;
}

void displaySymmetricalNumbers(long arr[], int n)
{
    displayCount(arr, n);
    for (int i = 0; i < n; i++)
    {
        int tmp = arr[i];
        int symmetricalNumbers = 0;
        while (tmp != 0)
        {
            symmetricalNumbers = symmetricalNumbers * 10 + tmp % 10;
            tmp = tmp / 10;
        }
        if (symmetricalNumbers == arr[i])
        {
            cout << symmetricalNumbers << " ";
        }
    }
    // cout << "\b";
}
int main()
{
    long arr[1000];
    int n;
    cin >> n;
    input(arr, n);
    displaySymmetricalNumbers(arr, n);
    return 0;
}
