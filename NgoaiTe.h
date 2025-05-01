#include "GiaoDich.h"


class NgoaiTe:public GiaoDich {
private:
    double TyGia;
    string Loai;
public:
    NgoaiTe();
    NgoaiTe(string Id,string Date, int DonGia, int SoLuong,double TyGia,string Loai);
    void Nhap(int i);
    void Xuat();
    long long Transaction();
    ~NgoaiTe();
};
