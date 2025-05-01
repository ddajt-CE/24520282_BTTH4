#include "BatDongSan.h"


    BatDongSan::BatDongSan(){};
    BatDongSan::BatDongSan(string Ma,string NgayGiao,int DonGia){
    this->Ma = Ma;
    this->NgayGiao = NgayGiao;
    this->DonGia = DonGia;
    };
    void BatDongSan::Nhap(int i){
    cout << "Giao dich thu " << i << endl;
    cout << "Ma giao dich:"; cin >> Ma; cout << endl;
    cout << "Ngay giao:"; cin >> NgayGiao; cout << endl;
    cout << "Don gia:"; cin >> DonGia;
    cout << endl;
    };
    string BatDongSan::getNgayGiao(){
    return NgayGiao;
    };
    void BatDongSan::Xuat(){
    cout << "Ma giao dich:" << Ma << endl << "Ngay giao:" << NgayGiao << endl << "Don gia:" << DonGia << endl;
    };
    BatDongSan::~BatDongSan(){
    };

