#include<iostream>
using namespace std;

int main(){
    int a=5;
    float f=6.5;
    int *pa=&a;
    float *pf=&f;
    void *p;
    p=&a;
    (*(int*)p)=10;
    cout<<"a="<<a<<endl;
    p=&f;
    (*(float*)p)=10.5;
    cout<<"f="<<f<<endl;
    int *y= new int;
    *y=113;
    cout<<"Gia tri cua y:"<<*y<<endl;
    return 0;
}