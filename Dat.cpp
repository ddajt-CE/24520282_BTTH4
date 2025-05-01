#include "BatDongSan.h"
#include "Dat.h"


    Dat::Dat(){};
    Dat::Dat(string Ma,string NgayGiao,int DonGia,string LoaiDat,double DienTich):BatDongSan(Ma,NgayGiao,DonGia){
        this->LoaiDat = LoaiDat;
        this->DienTich = DienTich;
    };
    void Dat::Nhap(int i){
    BatDongSan::Nhap(i+1);
    cout << "Loai Dat:";cin >> LoaiDat;
    cout << endl;
    cout << "Dien Tich:"; cin >> DienTich;cout << endl;
    };
    void Dat::Xuat(){
    BatDongSan::Xuat();
    cout << "Loai Dat:" << LoaiDat << endl;
    cout << "Dien Tich:" << DienTich << endl;
    };
    int Dat::Transaction(){
        if(LoaiDat == "B" || LoaiDat == "C") return DienTich * DonGia;
        else return DienTich * DonGia * 1.5;
    };

