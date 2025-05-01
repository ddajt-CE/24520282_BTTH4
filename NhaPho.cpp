#include "BatDongSan.h"
#include "NhaPho.h"


    NhaPho::NhaPho(string Ma,string NgayGiao,int DonGia,string LoaiNha,string DiaChi,double DienTich):BatDongSan(Ma,NgayGiao,DonGia){
        this->DienTich=DienTich;
        this->DiaChi=DiaChi;
        this->LoaiNha = LoaiNha;
    };
    NhaPho::NhaPho(){};
    void NhaPho::Nhap(int i){
        BatDongSan::Nhap(i+1);
        cin.ignore();
        cout << "Nhap loai nha:"; getline(cin,LoaiNha);
        cout << endl << "Dia Chi :"; getline(cin,DiaChi);
        cout << endl << "Dien tich:" ; cin >> DienTich;
        cout << endl;
    };
    void NhaPho::Xuat(){
        BatDongSan::Xuat();
        cout << "Loai nha:" << LoaiNha << endl << "Dia chi:" << DiaChi << endl << "Dien tich:" << DienTich << endl;
    };
    int NhaPho::Transaction(){
        if(LoaiNha == "cao cap") return DienTich * DonGia;
        else return DienTich * DonGia * 0.9;

    };


