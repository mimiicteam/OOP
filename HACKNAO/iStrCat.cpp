#include <iostream>
using namespace std;
void iStrCat(char strA[], char strB[])
{
    char strC[201];
    char strD[201];
    int length = 0;
    while (strA[length] != '\0' && strB[length] != '\0')
    {
        strC[length] = strA[length];
        strD[length] = strB[length];
        length++;
    }
}
int main()
{
    char strA[101];
    char strB[101];
    cin.getline(strA, 101);
    cin.getline(strB, 101);
    iStrCat(strA, strB);
    cout << strA << strB;
    return 0;
}
