#include<iostream>
#include<stdio.h>
#include<string.h>
#include<fstream>

using namespace std;

struct NhanVien
{
    int Ma;
    char Ten[255];
};

void GhiFileCauTruc()
{
    NhanVien dsnv[5];
    dsnv[0].Ma=1;
    strcpy(dsnv[0].Ten,"Hoang Cong Trong");
    dsnv[1].Ma=2;
    strcpy(dsnv[1].Ten,"Giap Thanh Thong");
    dsnv[2].Ma=3;
    strcpy(dsnv[2].Ten,"Nguyen Phuc Huy");
    dsnv[3].Ma=4;
    strcpy(dsnv[3].Ten,"Tran Bao Quy");
    dsnv[4].Ma=5;
    strcpy(dsnv[4].Ten,"Ho Phi Rin");
    ofstream outfile("FriendOfTrong.txt",ofstream::binary);
    outfile.write((char*)dsnv,sizeof(dsnv));
    outfile.close();
}
void XuatNhanVien(NhanVien dsnv[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<dsnv[i].Ma<<"\t"<<dsnv[i].Ten<<endl;
    }
}

void DocFilecCauTruc()
{
    ifstream infile("FriendOfTrong.txt",ifstream::binary);
    infile.seekg(0,infile.end);
    long size=infile.tellg();
    infile.seekg(0);
    int real=size/sizeof(NhanVien);
    NhanVien dsnv[real];
    infile.read((char*)dsnv,sizeof(dsnv));
    infile.close();
    XuatNhanVien(dsnv,real);
}

int main()
{
    //GhiFileCauTruc();
    DocFilecCauTruc();
    return 0;
}