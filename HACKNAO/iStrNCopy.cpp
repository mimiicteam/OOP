#include <iostream>

void iStrNCopy(char line1[], char line2[], int n)
{
    int length = 0;
    while (line1[length] != '\0')
    {
        line2[length] = line1[length];
        length++;
        if (length == n)
        {
            // std::cout << length;
            line2[length] = line1[length];
        }
    }
    // std::cout << length << std::endl;
    // line2[length] = '\0';
}
int main()
{
    char line1[201];
    char line2[201];
    int n;
    std::cin >> n;
    do
    {
        std::cin.getline(line1, 201);
    } while (line1[0] == '\0');

    iStrNCopy(line1, line2, n);

    std::cout << line2;

    return 0;
}
