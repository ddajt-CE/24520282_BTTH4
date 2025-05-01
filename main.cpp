#include "BatDongSan.h"
#include "NhaPho.h"
#include "Dat.h"
#include "ChungCu.h"

int main(){
int maxn = INT_MIN, pos = -1;
int Tb = 0, sum = 0;
bool co = false;
cout << "-----Danh sach giao dich dat-----\n";
int n;
cout << "So luong giao dich:" ; cin >> n;
vector<Dat> L(n);
for(int i = 0;i<n;i++){
L[i].Nhap(i);
}
cout << "-----Danh sach giao dich nha pho-----\n";
int m;
cout << "So luong giao dich:"; cin >> m;
vector<NhaPho> H(m);
for(int i = 0;i<m;i++){
    H[i].Nhap(i);
    if(maxn < H[i].Transaction()){
        maxn = H[i].Transaction();
        pos = i;
    }
}
cout << "-----Danh sach giao dich can ho chung cu-----\n";
int k;
cout << "So luong giao dich:";cin >>k ;
vector<ChungCu> A(k);
for(int i = 0;i<k;i++){
    A[i].Nhap(i);
    sum += A[i].Transaction();
}
cout << "Trung binh thanh tien cua can ho chung cu:"<< sum/(1.0 * k) << endl;
cout << "Giao dich nha pho co gia tri cao nhat:\n";
H[pos].Xuat();
cout << "Gia Tri:" << maxn << endl;
cout <<"-----Danh sach giao dich thang 12 nam 2024-----\n";
for(int i = 0;i<n;i++){
    if(L[i].getNgayGiao().find("12/2024") != string::npos){
        L[i].Xuat();
        co = true;
    }
}
for(int i = 0;i<m;i++){
    if(H[i].getNgayGiao().find("12/2024") != string::npos){
        H[i].Xuat();
        co = true;
    }
}
for(int i = 0;i<k;i++){
    if(A[i].getNgayGiao().find("12/2024") != string::npos){
        A[i].Xuat();
        co = true;
    }
}
if(!co) cout << "Khong co giao dich thang 12 nam 2024.";
}
