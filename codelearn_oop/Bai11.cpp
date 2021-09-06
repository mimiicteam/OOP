#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;

public:
    Circle(double radius)
    {
        this->radius = radius;
    }

    double getArea()
    {
        return radius * radius * 3.14;
    }

    double getCircumference()
    {
        return radius * 2 * 3.14;
    }
};