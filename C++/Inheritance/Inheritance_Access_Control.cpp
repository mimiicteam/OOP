

// C++ chương trình để chứng minh việc làm việc của việc thừa kế công cộng

#include <iostream>

class Base
{
private:
    int pvt = 1;

protected:
    int prot = 2;

public:
    int pub = 3;

    // Chức năng truy cập Thành viên Private
    int getPVT()
    {
        return pvt;
    }
};

// Thừa kế PUBLIC C++

class PublicDerived : public Base
{
public:
    // Chức năng truy cập thành viên được bảo vệ khỏi căn cứ
    int getProt()
    {
        return prot;
    }
};

// Thừa kế PROTECTED C++
class ProtectedDerived : protected Base
{
public:
    // chức năng truy cập thành viên được bảo vệ từ Base
    int getProt2()
    {
        return prot;
    }
    // chức năng truy cập thành viên công cộng từBase
    int getPub2()
    {
        return pub;
    }
};

class PrivateDerived : private Base
{
public:
    int getProt3()
    {
        return prot;
    }

    int getPub3()
    {
        return pub;
    }
};

int main()
{

    // Accessibility    private members     protected members      public members
    // Base Class       Yes                 Yes                    Yes
    // Derived Class    No                  Yes                    Yes

    PublicDerived object1;
    std::cout << "Private = " << object1.getPVT() << std::endl;
    std::cout << "Protected = " << object1.getProt() << std::endl;
    std::cout << "Public = " << object1.pub << std::endl;

    std::cout << "========================================\n";

    // Accessibility    private members     protected members       public members
    // Base Class       Yes                 Yes                     Yes
    // Derived Class    No                  Yes                     Yes(được thừa hưởng như các biến được bảo vệ)

    ProtectedDerived object2;
    std::cout << "Private không thể được truy cập." << std::endl;
    std::cout << "Protected = " << object2.getProt2() << std::endl;
    std::cout << "Protected = " << object2.getPub2() << std::endl;

    std::cout << "========================================\n";

    // Accessibility    private members     protected members                               public members
    // Base Class       Yes                 Yes                                             Yes
    // Derived Class    No                  Yes(được thừa hưởng như các biến riêng tư)      Yes(được thừa hưởng như các biến riêng tư)

    PrivateDerived object3;
    std::cout << "Private không thể được truy cập." << std::endl;
    std::cout << "Protected = " << object3.getProt3() << std::endl;
    std::cout << "Protected = " << object3.getPub3() << std::endl;

    return 0;
}
