#include <iostream>

void input(std::string arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        getline(std::cin, arr[i]);
    }
}

void output(std::string arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (n - 1)
            std::cout << arr[i] << std::endl;
        else
            std::cout << arr[i];
    }
}

int main()
{
    int n;
    std::cin >> n;
    std::cin.ignore();
    std::string arr[n];
    input(arr, n);
    output(arr, n);
}