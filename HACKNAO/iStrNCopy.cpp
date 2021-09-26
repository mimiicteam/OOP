#include <iostream>
using namespace std;

void iStrNCopy(char line1[], char line2[], int n)
{
    int i = 0;
    for (int i = 0; i < n; i++)
    {
        if (line1[i] != '\0')
            line2[i] = line1[i];
        line2[n] = '\0';
    }
}
int main()
{
    char line1[201];
    char line2[201];
    int n;
    cin >> n;
    do
    {
        cin.getline(line1, 201);
    } while (line1[0] == '\0');
    iStrNCopy(line1, line2, n);

    cout << line2;

    return 0;
}