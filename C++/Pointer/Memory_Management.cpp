#include <iostream>

class Student
{
    int age;

public:
    Student() : age(19) {}

    void getAge()
    {
        std::cout << "Age: " << age << std::endl;
    }
};

int main()
{
    std::cout << "=============================================================================================" << std::endl
              << std::endl;
    std::cout << "Phân bổ bộ nhớ động C++" << std::endl
              << std::endl;

    // Khai báo một con trỏ int
    int *pointInt;

    // tuyên bố một con trỏ nổi
    float *pointFloat;

    // phân bổ động bộ nhớ
    pointInt = new int;
    pointFloat = new float;

    // Gán giá trị cho bộ nhớ
    *pointInt = 45;
    *pointFloat = 45.45f;

    std::cout << "*pointInt = " << *pointInt << std::endl;
    std::cout << "*pointFloat = " << *pointFloat << std::endl;

    // giải quyết bộ nhớ
    delete pointInt;
    delete pointFloat;

    std::cout << "\n=============================================================================================" << std::endl
              << std::endl;
    std::cout << "C++ mới và xóa Toán tử cho Mảng" << std::endl
              << std::endl;

    int num;

    std::cout << "Nhập tổng số sinh viên: ";
    std::cin >> num;

    float *ptr;

    // phân bổ bộ nhớ của số num của phao
    ptr = new float[num];

    std::cout << "Nhập GPA của sinh viên." << std::endl;
    for (int i = 0; i < num; ++i)
    {
        std::cout << "Student " << i + 1 << " : ";
        std::cin >> *(ptr + i);
    }

    std::cout << "\nHiển thị GPA của sinh viên." << std::endl;
    for (int i = 0; i < num; ++i)
    {
        std::cout << "Student" << i + 1 << " :" << *(ptr + i) << std::endl;
    }

    // ptr bộ nhớ được phát hành.
    delete[] ptr;

    std::cout << "\n=============================================================================================" << std::endl
              << std::endl;
    std::cout << "C++ mới và xóa Toán tử cho Đối tượng" << std::endl
              << std::endl;

    // Tuyên bố động đối tượng sinh viên
    Student *ptr2 = new Student();

    // Chức năng Gọi Getage ()
    ptr2->getAge();

    // ptr bộ nhớ được phát hành.
    delete ptr2;
}
