// // Ví dụ đơn giản về thừa kế C++

// #include <iostream>

// // Lớp cơ sở
// class Animal
// {

// public:
//     void eat()
//     {
//         std::cout << "Tôi có thể ăn!" << std::endl;
//     }

//     void sleep()
//     {
//         std::cout << "Tôi có thể ngủ!" << std::endl;
//     }
// };

// // Lớp có nguồn gốc
// class Dog : public Animal
// {

// public:
//     void bark()
//     {
//         std::cout << "Tôi có thể sủa!Gâu gâu!!" << std::endl;
//     }
// };

// int main()
// {
//     // Tạo đối tượng của lớp chó
//     Dog dog1;

//     // Gọi cho các thành viên của lớp cơ sở
//     dog1.eat();
//     dog1.sleep();

//     // Gọi thành viên của lớp dẫn xuất
//     dog1.bark();

//     return 0;
// }

// =================================================================================================================

// protected Members

// C++ chương trình để chứng minh các thành viên được bảo vệ

#include <iostream>
#include <string>
using namespace std;

// Lớp cơ sở
class Animal
{

private:
    string color;

protected:
    string type;

public:
    void eat()
    {
        cout << "I can eat!" << endl;
    }

    void sleep()
    {
        cout << "I can sleep!" << endl;
    }

    void setColor(string clr)
    {
        color = clr;
    }

    string getColor()
    {
        return color;
    }
};

// Lớp có nguồn gốc
class Dog : public Animal
{

public:
    void setType(string tp)
    {
        type = tp;
    }

    void displayInfo(string c)
    {
        cout << "I am a " << type << endl;
        cout << "My color is " << c << endl;
    }

    void bark()
    {
        cout << "I can bark! Woof woof!!" << endl;
    }
};

int main()
{
    // Tạo đối tượng của lớp chó
    Dog dog1;

    // Gọi cho các thành viên của lớp cơ sở
    dog1.eat();
    dog1.sleep();
    dog1.setColor("black");

    // Gọi thành viên của lớp dẫn xuất
    dog1.bark();
    dog1.setType("mammal");

    // Sử dụng getColor() của dog1 như lập luận
    // getColor() Trả về dữ liệu chuỗi
    dog1.displayInfo(dog1.getColor());

    return 0;
}

// =================================================================================================================

// Chế độ Truy nhập trong Kế thừa C++

// class Animal
// {
//     // code
// };

// class Dog : private Animal
// {
//     // code
// };

// class Cat : protected Animal
// {
//     // code
// };
