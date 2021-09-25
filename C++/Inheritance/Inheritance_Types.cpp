// C++ Multiple, Multilevel and Hierarchical Inheritance

// C++ Multilevel Inheritance
// C++ Thừa kế đa cấp

// DEMO
// class A
// {
//     ........
// };
// class B : public A
// {
//     ........
// };
// class C : public B
// {
//     .........
// };

// #include <iostream>

// class A
// {
// public:
//     void display()
//     {
//         std::cout << "Base class content." << std::endl;
//     }
// };

// class B : public A
// {
// };

// class C : public B
// {
// };

// int main()
// {
//     C obj;
//     obj.display();
// }

// Multiple Inheritance in C++ Programming
// Thừa kế nhiều trong Lập trình C++

// DEMO
// class A
// {
//     ........
// };
// class B
// {
//     ........
// };
// class C : public A, public B
// {
//     .........
// };

// #include <iostream>

// class classA
// {
// public:
//     classA()
//     {
//         std::cout << "A" << std::endl;
//     }
// };

// class classB
// {
// public:
//     classB()
//     {
//         std::cout << "B" << std::endl;
//     }
// };

// class classC : public classA, public classB
// {
// };

// int main()
// {
//     classC obj;
//     return 0;
// }

// Hierarchical Inheritance in C++ Programming
// Kế thừa phân cấp trong lập trình C ++

// DEMO
// class Base
// {
//     ........
// }

// class ClassA : public Base
// {
//     ........
// }

// class ClassB : public Base
// {
//     ........
// }

// class ClassC : public Base
// {
//     ........
// }

// chương trình C ++ để chứng minh sự kế thừa phân cấp

#include <iostream>
using namespace std;

// base class
class Animal
{
public:
    void info()
    {
        cout << "I am an animal." << endl;
    }
};

// nguồn gốc class 1
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "I am a Dog. Woof woof." << endl;
    }
};

// nguồn gốc class 2
class Cat : public Animal
{
public:
    void meow()
    {
        cout << "I am a Cat. Meow." << endl;
    }
};

int main()
{
    // Tạo đối tượng của lớp Dog
    Dog dog1;
    cout << "Dog Class:" << endl;
    dog1.info(); // Chức năng lớp cha mẹ
    dog1.bark();

    // Tạo đối tượng của lớp Cat
    Cat cat1;
    cout << "\nCat Class:" << endl;
    cat1.info(); // Chức năng lớp cha mẹ
    cat1.meow();

    return 0;
}
