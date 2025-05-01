#include "BatDongSan.h"
#include "ChungCu.h"


    ChungCu::ChungCu(){};
    ChungCu::ChungCu(string Ma,string NgayGiao,int DonGia,string MaCan,int ViTri,double DienTich):
    BatDongSan(Ma,NgayGiao,DonGia){
    this->MaCan = MaCan;
    this->ViTri=ViTri;
    this->DienTich=DienTich;
    };
    void ChungCu::Nhap(int i){
    BatDongSan::Nhap(i+1);
    cout << "Ma can:"; cin >> MaCan;
    cout << endl << "Vi tri can:";cin >> ViTri;
    cout << endl << "Dien tich can:"; cin >> DienTich;
    };
    void ChungCu::Xuat(){
        BatDongSan::Xuat();
        cout << "Ma can:" << MaCan << endl << "Vi tri can:" << ViTri << endl << "Dien tich can:" << DienTich << endl;
    };
    int ChungCu::Transaction(){
        if(ViTri == 1) return DienTich*DonGia*2;
        else if(ViTri >= 15) return DienTich*DonGia*1.2;
        else return DienTich * DonGia;
    };
