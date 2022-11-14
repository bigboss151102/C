#include<iostream>
#include<fstream>
#include<math.h>
#include<string.h>
#include<conio.h>

using namespace std;
struct Book
{
    char ISBN[255];
    char TenSach[255];
    int SoTrang;
    char TenTacGia[255];
};

void NhapSach(Book &b)
{
    cout<<"Nhap ISBN:";
    gets(b.ISBN);
    cout<<"Nhap ten sach:";
    gets(b.TenSach);
    cout<<"Nhap so trang:";
    cin>>b.SoTrang;
    cin.ignore();
    cout<<"Nhap ten Tac Gia:";
    gets(b.TenTacGia);
}

void Nhapdanhsachsach(Book dssach[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"Cuon sach thu "<<i<<":"<<endl;
        NhapSach(dssach[i]);
    }
    
}

void Xuatsach(Book b)
{
    cout<<b.ISBN<<"\t"<<b.TenSach<<"\t"<<b.SoTrang<<"\t"<<b.TenTacGia<<endl;
}

void Xuatdanhdsachsach(Book dssach[], int n)
{
    for (int i = 0; i < n; i++)
    {
        Xuatsach(dssach[i]);
    }
    
}
void LuuFile(Book dssach[], int n)
{
    ofstream outfile("CsdlSach.txt",ofstream::binary);
    for (int i = 0; i < n; i++)
    {
        Book b=dssach[i];
        outfile.write((char*)&b,sizeof(Book));
    }
    outfile.close();
    
}
void DocFile(Book dssach[], int &n)
{
    ifstream infile("Csdlsach.txt",ifstream::binary);
    infile.seekg(0,infile.end);
    long size=infile.tellg();
    infile.seekg(0);
    n=size/sizeof(Book);
    for (int i = 0; i < n; i++)
    {
        Book b;
        infile.read((char*)&b,sizeof(Book));
        dssach[i]=b;
    }
    infile.close();   
}
void Timtacgia(Book dssach[], int n, char *tg)
{
    for (int i = 0; i < n; i++)
    {
        Book b=dssach[i];
        int kq=strcmp(b.TenTacGia,tg);
        if(kq==0)
        {
            Xuatsach(b);
        }
    }
    
}
void Sapxep(Book dssach[], int n)
{
    for (int i = 0; i < n-1 ; i++)
    {
        for (int j = i+1; j < n; j++)
        {   
            Book b1=dssach[i];
            Book b2=dssach[j];
            if(b1.SoTrang<b2.SoTrang)
            {
                dssach[i]=b2;
                dssach[j]=b1;      
            }
        }
        
    }
}
void XuatTop3(Book dssach[], int n)
{
    int m=n<3?n:3;
    for (int i = 0; i < m; i++)
    {
        Xuatsach(dssach[i]);
    }
}
int main()
{
    /*int n;
    cout<<"Ban muon nhap bao nhieu cuon sach:";
    cin>>n;
    fflush(stdin);
    Book dssach[n];
    Nhapdanhsachsach(dssach,n);
    cout<<"Danh sach sach sau khi ban nhap la:"<<endl;
    Xuatdanhdsachsach(dssach,n);
    LuuFile(dssach,n);*/

     int max=1000;
    Book dssach[max];
    int m;
    DocFile(dssach,m);
    Xuatdanhdsachsach(dssach,m);
    char tg[255];
    cout<<"Nhap ten tac gia can tim:";
    gets(tg);
    Timtacgia(dssach,m,tg);
    cout<<"Sau khi sort:"<<endl;
    Sapxep(dssach,m);
    Xuatdanhdsachsach(dssach,m);
    cout<<"\n----------------\n";
    cout<<"Top 3:"<<endl;
    XuatTop3(dssach,m);
    return 0;
}