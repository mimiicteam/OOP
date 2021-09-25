#include <iostream>

class ChieuRong;
class ChieuDai
{
private:
    int chieudai;
    friend int DienTich(ChieuDai, ChieuRong);

public:
    ChieuDai() : chieudai(10){};
};

class ChieuRong
{
private:
    int chieurong;
    friend int DienTich(ChieuDai, ChieuRong);

public:
    ChieuRong() : chieurong(5){};
};

int DienTich(ChieuDai cd, ChieuRong cr)
{
    return cd.chieudai * cr.chieurong;
};

int main()
{
    ChieuDai cd;
    ChieuRong cr;
    std::cout << "Dien Tich = " << DienTich(cd, cr) << std ::endl;
};