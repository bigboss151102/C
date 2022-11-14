#include<iostream>
#include<string.h>

using namespace std;

struct Diachi
{                   
    char TenDuong[250];
    char SoNha[25];
    char TenQuan[250];
    char TenTinh[250];
};

struct SinhVien
{
    char TenSinhVien[250];
    char Truong[250];
    char MaSoSinhVien[25];
    bool GioTinh;
    Diachi Diachinha;
    Diachi Diachitruong;
}teo,ty;


int main(){
    strcpy(teo.TenSinhVien,"Nguyen Van Teo");
    strcpy(teo.Truong,"Bach Khoa Da Nang");
    strcpy(teo.MaSoSinhVien,"102210333");
    teo.GioTinh=true;
    cout<<"--------------------------"<<endl;
    cout<<"Ten:"<<teo.TenSinhVien<<endl;
    cout<<"Truong:"<<teo.Truong<<endl;
    cout<<"MSSV:"<<teo.MaSoSinhVien<<endl;
    cout<<"Gio Tinh:"<<(teo.GioTinh==true?"Nam":"Nu")<<endl;
    cout<<"--------------------------"<<endl;
    SinhVien trong;
    strcpy(trong.MaSoSinhVien,"102210333");
    cout<<"MSSV:"<<trong.MaSoSinhVien<<endl;
    return 0;
}