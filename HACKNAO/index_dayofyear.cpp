#include <iostream>

bool check(int day, int month, int year)
{
    if (day <= 0 || day > 31 || month <= 0 || month > 12)
        return false;
    return true;
}

int maxDay(int month, int year)
{
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
        break;
    case 2:
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            return 29;
        else
            return 28;
    }
}

int countDays(int day, int month, int year)
{
    int count = 0;
    for (int i = 1; i < month; i++)
    {
        count += maxDay(i, year);
    }
    return count += day;
};

int main()
{
    int day, month, year;
    std::cin >> day;
    std::cin >> month;
    std::cin >> year;
    if (check(day, month, year))
    {
        std::cout << countDays(day, month, year);
    }
}