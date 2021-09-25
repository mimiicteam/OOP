#include <iostream>

void myStrcpy(char destination[], char source[])
{
    char tmp = source[100];
    destination == tmp;
}

int main()
{
    char strA[100];
    char strB[] = "HELLO DTU";
    myStrcpy(strA, strB);
    std::cout << "strA: " << strA << std::endl;
    std::cout << "strB: " << strB << std::endl;
}