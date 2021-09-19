// #include <iostream>
// using namespace std;

// void input(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
// }

// void display(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
// }

// void insertElement(int a[], int n, int value)
// {
//     int index = 0;
//     if (index == n)
//     {
//         a[n] = value;
//         n++;
//     }
//     else
//     {
//         for (int i = value; i > index; i--)
//         {
//             a[i] = a[i - 1];
//             cout << a[i] << endl;
//         };
//         a[index] = value;
//         n++;
//     }
// }

// int main()
// {
//     int arr[100];
//     int n = 0, val = 0;
//     cin >> n >> val;
//     input(arr, n);
//     insertElement(arr, n, val);

//     display(arr, n);
//     return 0;
// }

#include <iostream>
using namespace std;

void input(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}
void display(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
void sortElements(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void InsertX(int arr[], int &n, int val)
{
    int pos = 2;
    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    ++n;
}
int main()
{
    int arr[100];
    int n;
    cin >> n;
    int x;
    cin >> x;
    input(arr, n, x);
    InsertX(arr, n, x);
    sortElements(arr, n);
    display(arr, n, x);
    return 0;
}