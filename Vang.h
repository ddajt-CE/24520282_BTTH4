#include "GiaoDich.h"


class Vang:public GiaoDich{
private:
    string Loai;
public:
    Vang();
    Vang(string Id,string Date, int DonGia, int SoLuong, string Loai);
    void Nhap(int i);
    void Xuat();
    int Transaction();
    ~Vang();
};
