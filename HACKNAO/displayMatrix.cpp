#include <iostream>
using namespace std;
void inputMatrix(int arr[][1000], int m, int n)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
}
void displayMatrix(int arr[][1000], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j];
            if (j < n - 1)
                cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    int m, n;
    int arr[1000][1000];
    cin >> m >> n;
    inputMatrix(arr, m, n);
    displayMatrix(arr, m, n);
    return 0;
}
