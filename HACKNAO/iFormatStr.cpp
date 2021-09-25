#include <iostream>
using namespace std;
void deleteStr(char str[], int n, int x)
{
    for (int i = x + 1; i < n; i++)
    {
        str[i - 1] = str[i];
    }
    str[n - 1] = '\0';
}
void iFormatStr(char str[])
{
    int j = 0, k = 0;
    int n = 0, i = 0;
    while (str[i] != '\0')
    {
        n++;
        i++;
    }
    while (str[j] != '\0')
    {
        if (str[j] == str[j + 1])
        {
            deleteStr(str, n, j);
        }
        j++;
    }
    cout << str;
}
int main()
{
    char str[101];
    cin.getline(str, 101);
    iFormatStr(str);
    return 0;
}
