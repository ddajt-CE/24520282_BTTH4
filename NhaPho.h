#include "BatDongSan.h"
#pragma once


class NhaPho:public BatDongSan{
private:
    string LoaiNha, DiaChi;
    double DienTich;
public:
    NhaPho(string Ma,string NgayGiao,int DonGia,string LoaiNha,string DiaChi,double DienTich);
    NhaPho();
    void Nhap(int i);
    void Xuat();
    int Transaction();
};


