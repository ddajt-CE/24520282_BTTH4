
#include "NgoaiTe.h"
#include "GiaoDich.h"
#include "Vang.h"

int main(){
int maxn = INT_MIN, minx = INT_MAX;
bool ty = false;
int pos1 = -1, pos2 = -2;
int n;
cout << "-----Giao Dich Vang-----\n";
cout << "So luong giao dich vang:"; cin >> n;
vector<Vang> v(n);
for(int i = 0;i<n;i++){
v[i].Nhap(i);
if(v[i].Transaction() > maxn){
    maxn = v[i].Transaction();
    pos1 = i;
}
}
cout << "-----Giao Dich Ngoai Te-----\n";
cout << "So luong giao dich ngoai te:";int m; cin >> m;
vector<NgoaiTe> N(m);
for(int i = 0;i<n;i++){
    N[i].Nhap(i);
    if(N[i].Transaction() < minx){
        minx = N[i].Transaction();
        pos2 = i;
    }
}
cout << "-----Giao dich vang co gia tri cao nhat-----\n";
v[pos1].Xuat();
cout << "Gia tri:" << maxn << endl;
cout << "-----Giao dich ngoai te co gia tri thap nhat-----\n";
N[pos2].Xuat();
cout << "Gia tri:" << minx << endl;
cout << "-----Giao dich tren 1 ty-----\n";
for(int i = 0;i<n;i++){
    if(v[i].Transaction() > 1000000000) {
            v[i].Xuat();
            ty = true;
    }
}
for(int i = 0;i<m;i++){
    if(N[i].Transaction() > 1000000000) {
        N[i].Xuat();
        ty = true;
    }
}
if(!ty) cout << "Khong co giao dich tren 1 ty";


}
