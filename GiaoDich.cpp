#include "GiaoDich.h"

GiaoDich::GiaoDich(){
DonGia = 0;
SoLuong = 0;
};

GiaoDich::GiaoDich(string Id,string Date,int DonGia,int SoLuong){
this-> Id = Id;
this-> Date = Date;
this-> DonGia = DonGia;
this-> SoLuong = SoLuong;
};
 void GiaoDich::Nhap(int i){
cout << "Giao dich thu " << i << endl;
cout << "Ma giao dich:"; cin >> Id;
cout << endl;
cout << "Ngay Giao dich:"; cin >> Date;
cout << endl;
cout << "Don gia:"; cin >> DonGia;
cout << endl;
cout << "So luong:"; cin >> SoLuong;
cout << endl;

};
void GiaoDich::Xuat(){
cout << "Ma giao dich:" << Id << endl
     << "Ngay giao dich:" << Date << endl << "Don gia:" << DonGia << endl << "So luong:" << SoLuong << endl;
};
int GiaoDich::getSoLuong(){
return SoLuong;
};
int GiaoDich::getDonGia(){
return DonGia;
};
GiaoDich::~GiaoDich(){

};
