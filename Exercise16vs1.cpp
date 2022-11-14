#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>

using namespace std;
struct HocSinh
{
    char HoTen[255];
    float DiemToan;
    float DiemVan;
    float diemtrungbinh;
    char HocLuc[20];
};
void NhapHocSinh(HocSinh &hs);
void NhapDanhSachHocSinh(HocSinh dshs[], int &n);
void XuatHocSinh(HocSinh hs);
void XuatDanhSachHocSinh(HocSinh dshs[], int n);
void Tinhdiemtrungbinh(HocSinh *hs);
void XepLoai(HocSinh &hs);
void SapXepHocSinhTheoDiemTrungBinh(HocSinh dssv[], int n);
int main()
{
    int n;
    cout<<"So hoc sinh ban muon quan ly:";
    cin>>n;
    fflush(stdin);
    HocSinh dshs[n];
    NhapDanhSachHocSinh(dshs,n);
    XuatDanhSachHocSinh(dshs,n);
    cout<<"\n------------------------------\n";
    
}

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
void NhapDanhSachHocSinh(HocSinh dshs[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap hoc sinh thu "<<i<<":"<<endl;
        NhapHocSinh(dshs[i]);
    }
}

void XuatHocSinh(HocSinh hs)
{
    cout<<hs.HoTen<<"\t"<<hs.DiemToan<<"\t"<<hs.DiemVan<<"\t"<<hs.diemtrungbinh<<"\t"<<hs.HocLuc<<endl;
}

void XuatDanhSachHocSinh(HocSinh dshs[], int n)
{
    cout<<"Danh sach thong tin sinh vien la:"<<endl;
    for (int i = 0; i < n; i++)
    {
        XuatHocSinh(dshs[i]);
    }
}

void Tinhdiemtrungbinh(HocSinh hs)
{   
    hs.diemtrungbinh=(hs.DiemVan+hs.DiemVan)/2;
}
void XepLoai(HocSinh &hs)
{
    if(hs.diemtrungbinh >= 8)
    {
        strcpy(hs.HocLuc,"Gioi");
    }else if(hs.diemtrungbinh >= 7)
    {
        strcpy(hs.HocLuc,"Kha");
    }else if(hs.diemtrungbinh >= 5)   
    {
        strcpy(hs.HocLuc,"Trung Binh");
    }else
    {
        strcpy(hs.HocLuc,"Yeu");
    }
}
void SapXepHocSinhTheoDiemTrungBinh(HocSinh dssv[], int n)
{
    for (int i = 0; i <= n-1; i++)
    {
        for(int j=i+1;j<n; j++)
        {
            if(dssv[i].diemtrungbinh > dssv[j].diemtrungbinh)
            {
                HocSinh temp;
                temp= dssv[i];
                dssv[i]=dssv[j];
                dssv[j]=temp;
            }
        }
    }
    
}
