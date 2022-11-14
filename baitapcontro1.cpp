#include<iostream>
#include<iomanip>
#include<stdlib.h>

using namespace std;
void NhapMang(int *&a, int n);
void XuatMang(int *a, int n);
void SapXepMang(int *&a, int n);
void Swap(int *&a, int *&b);
int main()
{
    int *a;
    int n;
    cout<<"Moi ban nhap n:";
    cin>>n;
    NhapMang(a,n);
    cout<<"Mang sau khi nhap la:"<<endl;
    XuatMang(a,n);
    SapXepMang(a,n);
    cout<<"Mang sau khi sap xep:"<<endl;
    XuatMang(a,n);
    return 0;
}
void NhapMang(int *&a, int n)
{
    srand(time(NULL));
    a= new int[n];
    for(int i=0;i<n; i++)
    {
        *(a+i)=rand()%101;
    }
}

void XuatMang(int *a, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<*(a+i)<<"\t";
    }
    cout<<endl;
}
void Swap(int *&a, int *&b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void SapXepMang(int *&a, int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(*(a+i)<*(a+j))
            {
                int *a1=(a+i);
                int *a2=(a+j);
                Swap(a1,a2);             
            }
        }
    }
}
