#include<iostream>
using namespace std;

int main(){
    cout<<"Chuong trinh tinh chu vi - dien tich !"<<endl;
    double r;
    cout<<"Moi ban nhap R:";
    cin>>r;
    const double PI=3.14;
    double chuvi=2*PI*r;
    double dientich=PI * r * r;
    cout<<"Chu vi la:"<<chuvi<<endl;
    cout<<"Dien tich la:"<<dientich<<endl;
    return 0;
}