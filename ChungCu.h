#include "BatDongSan.h"
#pragma once

class ChungCu:public BatDongSan{
private:
    string MaCan;
    int ViTri;
    double DienTich;
public:
    ChungCu();
    ChungCu(string Ma,string NgayGiao,int DonGia,string MaCan,int ViTri,double DienTich);
    void Nhap(int i);
    void Xuat();
    int Transaction();

};
