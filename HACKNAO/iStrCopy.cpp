#include <iostream>

void iStrCopy(char line1[], char line2[])
{
    int length = 0;
    while (line1[length] != '\0')
    {
        line2[length] = line1[length];
        // std::cout << line2[length];
        length++;
    }
    line2[length] = '\0';
}
int main()
{
    char line1[201];
    char line2[201];
    std::cin.getline(line1, 201);
    iStrCopy(line1, line2);
    std::cout << line2;
    return 0;
}
