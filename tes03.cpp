#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

void Nhapmang(int A[], int n);
void Xuatmang(int A[], int n);
int Timk(int A[], int n, int k);
void Sapxepmang(int A[], int n);

int main()
{
    int n;
    cout<<"Nhap vao so phan tu cua Mang:";
    cin>>n;
    int A[n];
    Nhapmang(A,n);
    cout<<"Mang sau khi nhap la:"<<endl;
    Xuatmang(A,n);
    int k;
    cout<<"Nhap vao k can tim:";
    cin>>k;
    int kq=Timk(A,n,k);
    if(kq==-1)
    {
        cout<<"Khong tim thay "<<k<<"trong mang"<<endl;
    } else
    {
        cout<<"Tim thay "<<k<<" tai vi tri "<<kq<<endl;
    }
    cout<<"Mang sau khi sap xep:"<<endl;
    Sapxepmang(A,n);
    Xuatmang(A,n);
    return 0;

}
void Nhapmang(int A[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"A["<<i<<"]:";
        cin>>A[i];
    }
}
void Xuatmang(int A[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<"\t";
    }
    cout<<endl;
}

int Timk(int A[], int n, int k)
{
    for(int i=0;i<n;i++)
    {
        if(A[i]==k)
        {
            return i;
        }
    }
    return -1;
}

void Sapxepmang(int A[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
            {
                int temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
}