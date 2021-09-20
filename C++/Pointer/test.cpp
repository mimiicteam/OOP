#include <iostream>

void input(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cin >> *(arr + i);
    }
}

void output(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << *(arr + i) << " ";
    }
    std::cout << "\b";
}

int main()
{
    int arr[10], n;
    std::cout << "Input n: ";
    std::cin >> n;
    input(arr, n);
    output(arr, n);
}