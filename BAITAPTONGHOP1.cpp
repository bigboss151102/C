#include<iostream>
#include<stdio.h>
#include<string.h>
#include<fstream>

using namespace std;

// TAO MOT CAU TRUC SINH VIEN

struct SinhVien
{
    int Ma;
    char Ten[255];
    double Dtb;
};

// NHAP VAO MOT SINH VIEN !

SinhVien * NhapSinhVien()
{
    SinhVien *nv=new SinhVien;
    cout<<"Nhap ma sinh vien:";
    cin>>nv->Ma;
    cin.ignore();
    cout<<"Nhap ten sinh vien:";
    gets(nv->Ten);
    cout<<"Nhap diem sinh vien:";
    cin>>nv->Dtb;
    return nv;
}

// NHAP NHIEU SINH VIEN

void NhapDanhSachSinhVien(SinhVien **dssv, int siso)
{
    for(int i=0;i<siso;i++)
    {
        cout<<"Nhap sinh vien thu:"<<i<<endl;
        SinhVien *sv=NhapSinhVien();
        *(dssv+i)=sv;
    }
}

// XUAT MOT SINH VIEN

void XuatSinhVien(SinhVien *sv)
{
    cout<<sv->Ma<<"-"<<sv->Ten<<"-"<<sv->Dtb<<endl;
}

// XUAT NHIEU SINH VIEN

void XuatDanhSachSinhVien(SinhVien **dssv, int siso)
{
    for(int i=0;i<siso;i++)
    {
        SinhVien *sv=*(dssv+i);
        XuatSinhVien(sv);
    }
}

// HAM LUU FILE 
void LuuFile(SinhVien **dssv, int siso)
{
    ofstream outfile("danhsachsinhvien.txt",ofstream::binary);
    for(int i=0;i<siso;i++)
    {
        SinhVien *sv=*(dssv+i);
        outfile.write((char*)sv,sizeof(SinhVien));
    }
    outfile.close();
}

// HAM DOC FILE

void DocFile(SinhVien **&dssv, int siso)
{
    ifstream infile("danhsachsinhvien.txt",ifstream::binary);
    infile.seekg(0,infile.end);
    long size=infile.tellg();
    infile.seekg(0);
    siso=size/sizeof(SinhVien);
    dssv=new SinhVien *[siso];
    for(int i=0;i<siso;i++)
    {
        SinhVien *sv=new SinhVien;
        infile.read((char*)sv,sizeof(SinhVien));
        *(dssv+i)=sv;
    }
}
int main()
{
    /* int siso=3;
    SinhVien **dssv=new SinhVien*[siso];
    NhapDanhSachSinhVien(dssv,siso);
    cout<<"Danh sach sinh vien:"<<endl;
    XuatDanhSachSinhVien(dssv,siso);
    return 0;
    LuuFile(dssv,siso);*/
    
    int siso;
    SinhVien **dssv=NULL;
    DocFile(dssv,siso);
    XuatDanhSachSinhVien(dssv,siso);
    return 0;
}