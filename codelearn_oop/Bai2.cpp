#include <iostream>

using namespace std;

class Student
{
    string name;
    int age;

public:
    void getInformation()
    {
        cin >> name >> age;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s1;
    s1.getInformation();
    s1.display();
    return 0;
}