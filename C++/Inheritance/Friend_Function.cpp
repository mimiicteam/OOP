// C++ friend Function and friend Classes

// =========================================================================
// friend Function in C++
// Working of friend Function
// Làm việc của chức năng bạn bè

// C++ chương trình để chứng minh việc làm việc của friend function

// #include <iostream>

// class Distance
// {
// private:
//     int meter;

//     // friend function
//     friend int addFive(Distance);

// public:
//     Distance() : meter(0) {}
// };

// // khai báo friend function
// int addFive(Distance d)
// {

//     //Truy cập các thành viên riêng từ chức năng bạn bè
//     d.meter += 5;
//     return d.meter;
// }

// int main()
// {
//     Distance D;
//     std::cout << "Distance: " << addFive(D) << std::endl;
//     return 0;
// }

// =========================================================================

// Add Members of Two Different Classes
// Thêm thành viên của hai lớp khác nhau

// Thêm thành viên của hai lớp khác nhau bằng cách sử dụng friend functions

#include <iostream>
using namespace std;

// Tuyên bố về phía trước
// class ClassB;

// class ClassA
// {

// public:
//     // hàm tạo để khởi tạo numA thành 12
//     ClassA() : numA(12) {}

// private:
//     int numA;

//     // khai báo friend function
//     friend int add(ClassA, ClassB);
// };

// class ClassB
// {

// public:
//     // hàm tạo để khởi tạo numB thành 1
//     ClassB() : numB(1) {}

// private:
//     int numB;

//     // khai báo friend function
//     friend int add(ClassA, ClassB);
// };

// // truy cập thành viên của cả hai lớp
// int add(ClassA objectA, ClassB objectB)
// {
//     return (objectA.numA + objectB.numB);
// }

// int main()
// {
//     ClassA objectA;
//     ClassB objectB;
//     cout << "Sum: " << add(objectA, objectB) << std::endl;
//     return 0;
// }

// =========================================================================
// friend Class in C++
