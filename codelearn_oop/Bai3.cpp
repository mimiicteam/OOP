#include <iostream>

using namespace std;

class Rectangle {
    double length, width;
public:
    void getInformation(){
        cin >> length >> width;
    }

    double getArea(){
        return length * width;
    }

    double getPerimeter(){
        return (length + width) * 2.0;
    }

    void display(){
        cout << "Area: " << getArea() << endl;
        cout << "Perimeter: " << getPerimeter() << endl;
    }
};

int main() {
    Rectangle r1;
    r1.getInformation();
    r1.display();
    return 0;
}