#include<iostream>
#include<string.h>

using namespace std;
struct SinhVien
{
    int ma;
    char Ten[255];
};

void NhapMang(SinhVien DSSV[], int Siso);
void XuatMang(SinhVien DSSV[], int Siso);

int main(){
    int siso;
    cout<<"Nhap si so lop:";
    cin>>siso;
    SinhVien DSSV[siso];
    NhapMang(DSSV,siso);
    XuatMang(DSSV,siso);
    return 0;
}
void NhapMang(SinhVien DSSV[], int Siso)
{
    for(int i=0;i<Siso;i++)
    {
        cout<<"Nhap vao sinh vien thu "<<i<<endl;
        cout<<"Ma SV:";
        cin>>DSSV[i].ma;
        cout<<"Ten SV:";
        cin.ignore();
        gets(DSSV[i].Ten);
    }
}
void XuatMang(SinhVien DSSV[], int Siso)
{
    for (int i = 0; i < Siso; i++)
    {
        
        cout<<DSSV[i].ma<<"\t"<<DSSV[i].Ten<<endl;
    }
    
}
