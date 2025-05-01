#pragma once
#include<bits/stdc++.h>
using namespace std;

class GiaoDich{
protected:
  string Id,Date;
  int DonGia,SoLuong;
public:
  GiaoDich();
  GiaoDich(string Id,string Date,int DonGia,int SoLuong);
  void Nhap(int i);
  void Xuat();
  int getSoLuong();
  int getDonGia();
  ~GiaoDich();
};
