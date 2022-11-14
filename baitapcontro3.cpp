#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;
void NhapMaTran(int **&a, int n);
void XuatMaTran(int **a, int n);
int **TongMaTran(int **a, int **b, int n);
int main(){
    int **a, **b, n;
    cout<<"Moi ban nhap gia tri cua n:";
    cin>>n;     
    NhapMaTran(a,n);
    cout<<"Ma tran 1:"<<endl;
    XuatMaTran(a,n);
    NhapMaTran(b,n);
    cout<<"Ma tran 2:"<<endl;
    XuatMaTran(b,n);
    int **c=TongMaTran(a, b, n);
    cout<<"Ma tran 3:"<<endl;
    XuatMaTran(c,n);
    return 0;
}
void NhapMaTran(int **&a, int n)
{
    a=new int*[n];
    for(int i=0;i<n;i++)
    {
        *(a+i)=new int[n];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            *(*(a+i)+j)=rand()%11;
        }
    }

}
void XuatMaTran(int **a, int n)
{   
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<*(*(a+i)+j)<<"\t";
        }
        cout<<endl;
    }
}
int **TongMaTran(int **a, int **b, int n)
{
    int **c=new int*[n];
    for ( int i = 0; i < n; i++)
    {
        *(c+i)=new int[n];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            *(*(c+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
        }
    }
    return c;
    
}