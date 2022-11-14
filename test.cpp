#include<iostream>
using namespace std;

int main(){
    double a, b,x;
    cout<<"Nhap vao a:";
    cin>>a;
    cout<<"Nhap vao b:";
    cin>>b;
    if(a==0 && b==0)
    {
        cout<<"Phuong trinh vo so nghiem";
    }else if (a==0 && b!=0)
    {
        cout<<"Phuong trinh vo nghiem";
    }
    else
    {
        x=-b/a;
        cout<<"Phuong trinh co nghiem la:"<<x<<endl;
    }
    return 0;
}