#include "BatDongSan.h"
#pragma once

class Dat:public BatDongSan{
private:
    string LoaiDat;
    double DienTich;
public:
    Dat();
    Dat(string Ma,string NgayGiao,int DonGia,string LoaiDat,double DienTich);
    void Nhap(int i);
    void Xuat();
    int Transaction();
};

