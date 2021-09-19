#include <iostream>
using namespace std;
main()
{
    char a;
    cin >> a;
    if (a >= 'a' && a <= 'z')
    {
        a -= 32;
        cout << a;
    }
    else if (a >= 'A' && a <= 'Z')
    {
        a += 32;
        cout << a;
    }
    else
    {
        cout << a;
    }
}