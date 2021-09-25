// C++ program to demonstrate function overriding

#include <iostream>
using namespace std;

class Base
{
public:
    void printWords()
    {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base
{
public:
    void printWords()
    {
        cout << "Derived Function" << endl;
    }

    void printWords2()
    {
        cout << "Derived Function 2" << endl;
        // Gọi chức năng ghi đè
        Base::printWords();
    }
};

int main()
{
    Derived derived1, derived2, derived3, derived4;

    // C++ Function Overriding
    // C++ Hàm Overriding
    derived1.printWords();

    std::cout << "================================================================\n";

    // C++ Access Overridden Function to the Base Class
    // Hàm Overridden Truy cập C++ vào Lớp Cơ sở
    // trong main() Sử dụng toán tử độ phân giải Phạm vi ::
    // truy cập printWords() chức năng của The. Base class
    derived2.Base::printWords();

    std::cout << "================================================================\n";

    // C++ Call Overridden Function From Derived Class
    // Hàm ghi đè cuộc gọi C++ từ lớp có nguồn gốc
    // từ một chức năng thành viên của lớp dẫn xuất
    // Hàm ghi đè cuộc gọi C++ từ lớp có nguồn gốc
    derived3.printWords2();

    std::cout << "================================================================\n";

    // C++ Call Overridden Function Using Pointer
    // Chức năng ghi đè cuộc gọi bằng con trỏ

    // con trỏ của Base gõ điểm đó để derived4
    Base *ptr = &derived4;

    // Chức năng cuộc gọi của lớp Base sử dụng ptr
    ptr->printWords();
    return 0;
}