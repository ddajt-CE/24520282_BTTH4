#pragma once
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

class BatDongSan{
protected:
    string Ma,NgayGiao;
    int DonGia;
public:
    BatDongSan();
    BatDongSan(string Ma,string NgayGiao,int DonGia);
    void Nhap(int i);
    void Xuat();
    string getNgayGiao();
    ~BatDongSan();


};
