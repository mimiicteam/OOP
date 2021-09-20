#include <iostream>

int main()
{
    std::cout << "=============================================================================================" << std::endl
              << std::endl;

    std::cout << "Con trỏ và mảng C++" << std::endl
              << std::endl;
    float arr[3];

    // Khai báo biến con trỏ.
    float *ptr;

    std::cout << "Hiển thị địa chỉ bằng mảng: " << std::endl;

    // Sử dụng cho vòng lặp để in địa chỉ của tất cả các phần tử mảng
    for (int i = 0; i < 3; ++i)
    {
        std::cout << "&arr[" << i << "] = " << &arr[i] << std::endl;
    }

    // ptr = &arr[0]
    ptr = arr;

    std::cout << "\nHiển thị địa chỉ bằng con trỏ: " << std::endl;

    // sử dụng cho vòng lặp để in địa chỉ của tất cả các phần tử mảng
    // sử dụng ký hiệu con trỏ
    for (int i = 0; i < 3; ++i)
    {
        std::cout << "ptr + " << i << " = " << ptr + i << std::endl;
    }

    std::cout << "=============================================================================================" << std::endl
              << std::endl;

    std::cout << "Tên mảng được sử dụng làm con trỏ" << std::endl
              << std::endl;

    int arr2[3];
    // Chèn dữ liệu bằng ký hiệu con trỏ
    std::cout << "Nhập 3 số: ";
    for (int i = 0; i < 3; ++i)
    {

        // Lưu trữ số đầu vào trong arr[i]
        std::cin >> *(arr2 + i); // giong cin >>a[i]
    }

    // Hiển thị dữ liệu bằng ký hiệu con trỏ
    std::cout << "Hiển thị dữ liệu: " << std::endl;
    for (int i = 0; i < 3; ++i)
    {

        // giá trị hiển thị của. arr[i]
        std::cout << *(arr2 + i) << std::endl; // giong cout << a[i]
    }
}