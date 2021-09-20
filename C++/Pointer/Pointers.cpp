#include <iostream>

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    std::cout << "Address of a:" << &a << std::endl;
    std::cout << "Address of b:" << &b << std::endl;
    std::cout << "Address of c:" << &c << std::endl
              << std::endl;

    std::cout << "=============================================================================================" << std::endl
              << std::endl;

    // Khai bao 1 con tro pointValue va 1 bien value
    int *pointValue, value;

    // value co gia tri la 1
    value = 1;

    // gan dia chi value cho con tro pointValue
    pointValue = &value;

    std::cout << "Địa chỉ con trỏ pointValue: " << pointValue << std::endl; // in con trỏ pointVaule

    // Lấy giá trị từ Địa chỉ bằng cách sử dụng con trỏ
    std::cout << "Giá trị của *pointValue: " << *pointValue << std::endl; // in ra 1.Giá trị truy cập được trỏ bởi pointVar

    std::cout << "Địa chỉ &pointValue: " << &pointValue << std::endl; // in ra dia chi cua pointValue: 0x7ffee5cf1728

    std::cout << "Địa chỉ &value: " << &value << std::endl
              << std::endl; // in ra dia chi cua value: 0x7ffee5cf1724

    std::cout << "=============================================================================================" << std::endl
              << std::endl;

    // Lấy giá trị từ Địa chỉ bằng cách sử dụng con trỏ

    std::cout << "Lấy giá trị từ Địa chỉ bằng cách sử dụng con trỏ" << std::endl
              << std::endl;

    int var = 5;

    // Khai báo biến con trỏ.
    int *pointVar;

    // Địa chỉ cửa hàng của var
    pointVar = &var;

    // Giá trị in của là
    std::cout << "var = " << var << std::endl;

    // Địa chỉ in của var
    std::cout << "Địa chỉ của var. (&var) = " << &var << std::endl
              << std::endl;

    // In địa chỉ con trỏ pointVar
    std::cout << "pointVar = " << pointVar << std::endl;

    // In nội dung của địa chỉ Pointvar chỉ vào
    std::cout << "Nội dung của địa chỉ được chỉ ra bởi pointVar (*pointVar) = " << *pointVar << std::endl
              << std::endl;

    std::cout << "=============================================================================================" << std::endl
              << std::endl;

    //   Thay đổi giá trị được chỉ bởi con trỏ

    std::cout << "Thay đổi giá trị được chỉ bởi con trỏ" << std::endl
              << std::endl;

    // CODE

    int var2 = 5;
    int *pointVar2;

    // Địa chỉ cửa hàng của var
    pointVar2 = &var2;

    // in var2
    std::cout << "var2 = " << var2 << std::endl;

    // in *pointVar2
    std::cout << "*pointVar2 = " << *pointVar2 << std::endl
              << std::endl;

    std::cout << "Thay đổi giá trị của var2 thành 7:" << std::endl;

    // Thay đổi giá trị của var2 thành 7
    var2 = 7;

    // in var
    std::cout << "var2 = " << var2 << std::endl;

    // in *pointVar2
    std::cout << "*pointVar2 = " << *pointVar2 << std::endl
              << std::endl;

    std::cout << "Thay đổi giá trị của. *pointVar2 thành 16:" << std::endl;

    // Thay đổi giá trị của var thành 16
    *pointVar2 = 16;

    // in var2
    std::cout << "var2 = " << var2 << std::endl;

    // in *pointVar2
    std::cout << "*pointVar2 = " << *pointVar2 << std::endl
              << std::endl;

    std::cout << "=============================================================================================" << std::endl
              << std::endl;

    int var3, *varPoint3;

    // Lỗi!
    // varPoint là một địa chỉ nhưng var không phải
    // varPoin3t = var3;

    // Lỗi!
    // &var là một địa chỉ
    // *varPoint là giá trị được lưu trữ trong &var
    // *varPoint3 = &var3;

    // Đúng!
    // varPoint là một địa chỉ và như vậy là &var
    varPoint3 = &var3;

    // Đúng!
    // cả hai *varPoint và var là các giá trị
    *varPoint3 = var3;
}
