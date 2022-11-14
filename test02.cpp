#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"Nhap vao a:";
    cin>>a;
    cout<<"Nhap vao b:";
    cin>>b;
    cout<<"Nhap vao c:";
    cin>>c;
    int max;
    if(a>b && a>c){
        max=a;
        cout<<"So lon nhat trong 3 so la: "<<a<<endl;
    }else if(b>a && b>c){
        max=b;
        cout<<"So lon nhat trong 3 so la: "<<b<<endl;
    }else{
        max=c;
        cout<<"So lon nhat trong 3 so la: "<<c<<endl;
    }
    return 0;
}