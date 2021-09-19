#include <iostream>
using namespace std;
void inputMatrix(int m, int n, int a[][100])
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
}
void displayMatrix(int m, int n, int a[][100])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j];
            if (j < n - 1)
                cout << " ";
        }
        cout << endl;
    }
}

void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

void sortMatrix(int m, int n, int a[][100])
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
                for (int z = 0; z < n; z++)
                    if (a[i][j] < a[k][z])
                        swap(a[i][j], a[k][z]);
        }
}
int main()
{
    int m, n, a[50][100];
    cin >> m >> n;
    inputMatrix(m, n, a);
    sortMatrix(m, n, a);
    displayMatrix(m, n, a);
    return 0;
}