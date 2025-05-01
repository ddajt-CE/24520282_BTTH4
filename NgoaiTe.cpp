#include "NgoaiTe.h"
#include "GiaoDich.h"


    NgoaiTe::NgoaiTe(){};
    NgoaiTe::NgoaiTe(string Id,string Date, int DonGia, int SoLuong,double TyGia,string Loai):GiaoDich(Id,Date,DonGia,SoLuong){
    this->TyGia = TyGia;
    this->Loai = Loai;
    }
    void NgoaiTe::Nhap(int i){
        GiaoDich::Nhap(i+1);
        cout << "Nhap ty gia:"; cin >> TyGia;
        cout << endl;
        cout << "Nhap Loai:"; cin >> Loai;
        cout << endl;
    };
    void NgoaiTe::Xuat(){
        GiaoDich::Xuat();
        cout << "Ty gia:" << TyGia << endl << "Loai:" << Loai << endl;
    };
    long long NgoaiTe::Transaction(){
        if(Loai == "USD" || Loai == "EURO") return SoLuong*DonGia*TyGia*1LL;
        else return SoLuong*DonGia*1LL;
    };
    NgoaiTe::~NgoaiTe(){};


