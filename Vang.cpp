#include "Vang.h"
#include "GiaoDich.h"
    Vang::Vang(){};
    Vang::Vang(string Id,string Date, int DonGia, int SoLuong, string Loai):GiaoDich(Id,Date,DonGia,SoLuong){
    this-> Loai = Loai;
    };
    void Vang::Nhap(int i){
    GiaoDich::Nhap(i+1);
    cout << "Loai vang:"; cin >> Loai;
    cout << endl;
    };
    void Vang::Xuat(){
    GiaoDich::Xuat();
    cout << "Loai:" << Loai << endl;
    };
    int Vang::Transaction(){
    return SoLuong * DonGia ;
    };
    Vang::~Vang(){};
