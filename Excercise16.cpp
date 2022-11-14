#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;
struct HocSinh
{
    char HoTen[255];
    float DiemToan;
    float DiemVan;
};

void NhapHocSinh(HocSinh &hs)
{
    cout<<"Nhap Ho va Ten cua hoc sinh:";
    fflush(stdin);
    gets(hs.HoTen);
    cout<<"Nhap diem Toan:";
    cin>>hs.DiemToan;
    cout<<"Nhap diem Van:";
    cin>>hs.DiemVan;
}

void NhapDanhSachHocSinh(HocSinh dshs[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap hoc sinh thu "<<i<<":"<<endl;
        NhapHocSinh(dshs[i]);
    }
}

float DiemTrungBinh(HocSinh dtb)
{
    float diemtb=((dtb.DiemToan+dtb.DiemVan)*(1.0))/2;
    return diemtb;
}

void XuatHocSinh(HocSinh hs)
{
    float kq=DiemTrungBinh(hs);
    cout<<"Ten:"<<hs.HoTen<<"\t\t"<<"Diem Toan:"<<hs.DiemToan<<"\t\t"<<"Diem Van:"<<hs.DiemVan<<"\t\t"<<"DTB:"<<kq<<endl;
}

void XuatDanhSachHocSinh(HocSinh dshs[], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        XuatHocSinh(dshs[i]);
    }
}
void XepLoai(HocSinh dshs[], int n)
{
    HocSinh hs;
    float kq2=DiemTrungBinh(hs);
    for (int i = 0; i < n; i++)
    {
        if(kq2>=8)
        {
            XuatHocSinh(dshs[i]);
        }else if (kq2>=7)
        {
            XuatHocSinh(dshs[i]);
        }else if (kq2>=5)
        {
            XuatHocSinh(dshs[i]);
        }else{
            XuatHocSinh(dshs[i]);
        }
    }
}
int main()
{
    int n;
    cout<<"So hoc sinh ban muon quan ly:";
    cin>>n;
    fflush(stdin);
    HocSinh dshs[n];

    NhapDanhSachHocSinh(dshs,n);
    cout<<"\n------------------------------\n";
    cout<<"Danh sach hoc sinh da nhap:"<<endl;
    XuatDanhSachHocSinh(dshs,n);
    cout<<"Xep loai hoc sinh:"<<endl;
    XepLoai(dshs,n);
    return 0;
}