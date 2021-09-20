#include <iostream>

// Định nghĩa hàm để trao đổi giá trị
void swap(int &n1, int &n2)
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

// nguyên mẫu hàm với con trỏ làm tham số
void swap2(int *, int *);

void swap2(int *n1, int *n2)
{
    int tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}

int main()
{
    std::cout << "=============================================================================================" << std::endl
              << std::endl;
    std::cout << "Đi ngang qua tham chiếu mà không có con trỏ" << std::endl
              << std::endl;

    // Khởi tạo các biến.
    int a = 1,
        b = 2;

    std::cout << "Trước khi hoán đổi" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    // Chức năng cuộc gọi để trao đổi số
    swap(a, b);

    std::cout << "\nSau khi hoán đổi" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << std::endl;

    std::cout << "=============================================================================================" << std::endl
              << std::endl;
    std::cout << "Đi qua tham chiếu bằng cách sử dụng con trỏ" << std::endl
              << std::endl;

    // Khởi tạo các biến.
    int c = 3,
        d = 4;

    std::cout << "Trước khi hoán đổi" << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;

    // Chức năng cuộc gọi bằng cách truyền địa chỉ biến
    swap2(&c, &d);

    std::cout << "\nSau khi hoán đổi" << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << std::endl;
}