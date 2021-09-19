#include <iostream>

int main()
{
    int month, year, day;
    std::cin >> month >> year;
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        day = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        day = 30;
        break;
    case 2:
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            day = 29;
        else
            day = 28;
    }
    std::cout << day << std::endl;
}