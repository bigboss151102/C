#include<iostream>
#include<fstream>
#define Max 3
using namespace std;
struct SanPham
{
    int Ma;
    char Ten[255];
    int Gia;
};

void NhapSanPham(SanPham &sp);
void NhapDanhSachSanPham(SanPham dssp[],int n);
void XuatSanPham(SanPham sp);
void XuatDanhSachSanPham(SanPham dssp[],int n);
void LuuFile(SanPham dssp[],int n);
void DocFile(SanPham dssp[],int &n);

int main()
{   
    SanPham dssp[Max];
    NhapDanhSachSanPham(dssp, Max);
    cout<<"San pham sau khi nhap la:"<<endl;
    XuatDanhSachSanPham(dssp,Max);
    LuuFile(dssp,Max);
    return 0;       
}
void NhapSanPham(SanPham &sp){
    cout<<"Ma:";
    cin>>sp.Ma;
    cout<<"Ten:";
    cin.ignore();
    gets(sp.Ten);
    cout<<"Gia:";
    cin>>sp.Gia;
}
void NhapDanhSachSanPham(SanPham dssp[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"San pham thu "<<i<<":"<<endl;
        NhapSanPham(dssp[i]);
    }
}
void XuatSanPham(SanPham sp)
{
    cout<<sp.Ma<<"-"<<sp.Ten<<"-"<<sp.Gia<<endl;
}
void XuatDanhSachSanPham(SanPham dssp[],int n)
{
    for (int i = 0; i < n; i++)
    {
        XuatSanPham(dssp[i]);
    }
}
void LuuFile(SanPham dssp[],int n)
{
    ofstream outfile("dssp.txt",ofstream::binary);
    for (int i = 0; i < n; i++)
    {
        SanPham sp=dssp[i];
        outfile.write((char*)&sp,sizeof(SanPham));
    }
    outfile.close();
}
void DocFile(SanPham dssp[],int &n)
{
    ifstream infile("dssp.txt",ifstream::binary);
    infile.seekg(0,infile.end);
    long size=infile.tellg();
    infile.seekg(0);
    n=size/sizeof(SanPham);
    for(int i=0;i<n;i++)
    {
        SanPham sp;
        infile.read((char*)&sp,sizeof(SanPham));
        dssp[i]=sp;
    }
}