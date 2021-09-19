#include "iostream"
using namespace std;
// ID = ( 2051220156) % 10 + 1 = 7;
class SinhVien
{
private:
    string masv;
    string hoten;
    double diemon1;
    double diemon2;
    double diemon3;
    string quequan;
    int gt; // 1: nam, 0: nu
public:
    void nhap();
    void xuat();
    ~SinhVien()
    {
        cout << " Day la ham huy sinhvien " << endl;
    }
    SinhVien(string masv = "", string hoten = "", double diemon1 = 0,
             double diemon2 = 0, double diemon3 = 0, string quequan = "", int gt = 1)
        : masv(masv), hoten(hoten), diemon1(diemon1), diemon2(diemon2), diemon3(diemon3), quequan(quequan), gt(gt)
    {
        cout << "ham dung" << endl;
    }
    int get_gt();
    double diem_tb();
    double get_diemon1();
    double get_diemon2();
    double get_diemon3();
};
int SinhVien ::get_gt()
{
    return gt;
}
double SinhVien ::get_diemon1()
{
    return diemon1;
}
double SinhVien ::get_diemon2()
{
    return diemon2;
}
double SinhVien ::get_diemon3()
{
    return diemon3;
}
double SinhVien ::diem_tb()
{
    double a = diemon1;
    double b = diemon2;
    double c = diemon3;
    return (a + b + c) / 3;
}
void SinhVien::xuat()
{
    cout << "XUAT SINH VIEN" << endl;
    cout << "masv: " << masv << endl;
    cout << "hoten: " << hoten << endl;
    cout << "diemon1: " << diemon1 << endl;
    cout << "diemon2: " << diemon2 << endl;
    cout << "diemon3: " << diemon3 << endl;
    cout << "que quan: " << quequan << endl;
    if (gt == 1)
        cout << "gioi tinh: "
             << "nam" << endl;
    else
        cout << "gioi tinh: "
             << "nu" << endl;
}
void SinhVien::nhap()
{
    cout << "NHAP SINH VIEN" << endl;
    cout << "nhap masv: ";
    fflush(stdin);
    getline(cin, masv);
    cout << "nhap hoten: ";
    fflush(stdin);
    getline(cin, hoten);
    cout << "nhap diemon1: ";
    cin >> diemon1;
    cout << "nhap diemon2: ";
    cin >> diemon2;
    cout << "nhap diemon3: ";
    cin >> diemon3;
    cout << "nhap quequan: ";
    fflush(stdin);
    getline(cin, quequan);
    cout << "nhap gioi tinh (nhap 1: nam, nhap 0: nu): ";
    cin >> gt;
}

//////////////////////////////////////////
class LopHoc
{
private:
    const int size;
    SinhVien *sv;

public:
    void nhap();
    void xuat();
    ~LopHoc()
    {
        if (this->size > 0)
        {
            delete[] sv;
            sv = NULL;
        }
    }
    LopHoc(int size = 0) : size(size)
    {
        cout << "ham dung" << endl;
        if (this->size > 0)
        {
            this->sv = new SinhVien[this->size];
        }
    }
    void tim_sv();
};
void LopHoc::tim_sv()
{
    for (int i = 0; i < size; i++)
    {
        if (sv[i].get_gt() == 0 && sv[i].get_diemon1())
        {
            cout << "===CO SINH VIEN=== " << endl;
            sv[i].xuat();
            return;
        }
    }
    cout << "khong co nu nao ca :(" << endl;
}
void LopHoc::xuat()
{
    cout << endl
         << "XUAT LOP HOC" << endl;
    for (int i = 0; i < size; i++)
    {
        sv[i].xuat();
    }
}
void LopHoc::nhap()
{
    cout << "NHAP LOP HOC" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Nhap sinh vien thu " << i << endl;
        sv[i].nhap();
    }
}

int main()
{
    LopHoc lh(3);
    lh.nhap();
    lh.xuat();
    lh.tim_sv();
    return 0;
}
