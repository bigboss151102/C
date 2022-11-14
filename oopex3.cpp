#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;
struct Date
{
    int d;
    int m;
    int y;
};

int SoNgay( int Thang, int Nam);
void NgayTruocDo(Date Ngay,Date Thang,Date Nam);
void NgaySauDo(Date Ngay,Date Thang,Date Nam);

int main()
{
    Date Day;
    Date Month;
    Date Year;
    do{
    cout<<"Moi ban nhap Ngay:";
    cin>>Day.d;
    cout<<"Moi ban nhap Thang:";
    cin>>Month.m;
    cout<<"Moi ban nhap Nam:";
    cin>>Year.y;
    } while(Day.d<1 || Day.d >31 || Month.m<1 || Month.m>12 || Year.y<1 );

    int kq;
    kq=SoNgay(Month.m,Year.y);
    cout<<"So Ngay cua thang do la:"<<kq<<endl;
    NgayTruocDo(Day,Month,Year);
    cout<<"Ngay truoc do:"<<Day.d<<"/"<<Month.m<<"/"<<Year.y<<endl;
    NgaySauDo(Day,Month,Year);
    cout<<"Ngay sau do:"<<Day.d<<"/"<<Month.m<<"/"<<Year.y<<endl;
    return 0;
}
int SoNgay( int Thang, int Nam)
{
    switch (Thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
            return 31;  
    case 4:
    case 6:
    case 9:
    case 11:
            return 30;
    case 2:
        return ((Nam % 400 == 0) || (Nam %4 == 0 && Nam % 100 != 0)) ? 29 : 28;
    
    default:
        return -1;
    }
}
void NgayTruocDo(Date Ngay,Date Thang,Date Nam)
{
    if(Ngay.d==1)
    {
        if(Thang.m==1)
        {
            Ngay.d=31;
            Thang.m=12;
            Nam.y--;
        }else{
            Thang.m--;
            Ngay.d=SoNgay(Thang.m,Nam.y);
        }
    }else{
        Ngay.d--;
    }
}
void NgaySauDo(Date Ngay,Date Thang,Date Nam)
{
    int nct=SoNgay(Thang.m,Nam.y);
    if(Ngay.d==nct)
    {
    if(Thang.m==12)
    {
        Ngay.d=1;
        Thang.m=1;
        Nam.y ++;
    }else{
        Ngay.d=1;
        Thang.m ++;
    }
    }else{
        Ngay.d ++;
    }
}
