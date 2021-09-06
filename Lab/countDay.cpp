#include <iostream>

bool check(int day, int month, int year)
{
    if (day <= 0 || day > 31 || month <= 0 || month > 12)
        return false;
    return true;
}

int maxDay(int month, int year)
{
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 11 || month == 12)
        return 31;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        return 29;
    else
        return 28;
}

int countDays(int day, int month, int year ){
    int count = 0;
    for (int i = 1; i < month; i++){
        count += maxDay(i, year);
        std::cout << day << " " << month << " " << year << "//countDay: " << count << std::endl;
    }
    std::cout << "Count day: ";
    return count += day;
};

int main()
{
    int day, month, year;
    std::cout << "Input day: ";
    std::cin >> day;
    std::cout << "Input month: ";
    std::cin >> month;
    std::cout << "Input year: ";
    std::cin >> year;
    if(check(day,month,year)){
        std::cout << countDays(day, month, year);
    }
}