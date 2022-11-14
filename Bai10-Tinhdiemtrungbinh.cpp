#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double Toan, Ly, Hoa;
    double dtb;
    cout<<"Nhap diem Toan:";
    cin>>Toan;
    cout<<"Nhap diem Ly:";
    cin>>Ly;
    cout<<"Nhap diem Hoa";
    cin>>Hoa;
    dtb=(Toan+Ly+Hoa)/3;
    cout<<"Diem trung binh"<<dtb<<endl;
    cout<<"Diem trung binh sau khi lam tron"<<setprecision(3)<<dtb<<endl;
    return 0;
}