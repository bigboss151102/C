#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

struct ToaDo
{
    double x;
    double y;
    double z;
};
void CongHaiVecto(ToaDo a, ToaDo b)
{
    ToaDo c;
    c.x=a.x+b.x;
    c.y=a.y+b.y;
    c.z=a.z+b.z;
    cout<<"Toa do sau khi cong:"<<"c="<<"("<<c.x<<";"<<c.y<<";"<<c.z<<")"<<endl;
}

void TruHaiVecto(ToaDo a, ToaDo b)
{
    ToaDo c;
    c.x=a.x-b.x;
    c.y=a.y-b.y;
    c.z=a.z-b.z;
    cout<<"Toa do sau khi tru:"<<"c="<<"("<<c.x<<";"<<c.y<<";"<<c.z<<")"<<endl;
}
float TichVoHuongHaiVecTo(ToaDo a, ToaDo b)
{           
    float c;
    c=(a.x*b.x)+(a.y*b.y)+(a.z*b.z);
    return c;

}
int main()
{
    ToaDo A;
    ToaDo B;
    cout<<"Nhap vao diem A:"<<endl;
    cout<<"x=";
    cin>>A.x;
    cout<<"y=";
    cin>>A.y;
    cout<<"z=";
    cin>>A.z;
    cout<<"Nhap vao diem B:"<<endl;
    cout<<"x=";
    cin>>B.x;
    cout<<"y=";
    cin>>B.y;
    cout<<"z=";
    cin>>B.z;
    CongHaiVecto(A, B);
    TruHaiVecto(A,B);
    float tichvohuong;
    tichvohuong=TichVoHuongHaiVecTo(A,B);
    cout<<"Tich vo huong co gia tri la:"<<tichvohuong<<endl;
    return 0;
}