#include <iostream>

int iGetLen(char line[])
{
    int length = 0;
    while (line[length] != '\0')
    {
        length++;
    }
    return length;
}

int main()
{
    char line[201];
    std::cin.getline(line, 2001);
    std::cout << iGetLen(line);
    return 0;
}