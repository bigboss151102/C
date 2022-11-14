#include<iostream>
using namespace std;

int main(){
    int a=15, b=20;
    int *pa, *pb, temp;
    pa=&a; // con tro pa chua dia chi cua a
    pb=&b; // con tro pb chua dia chi cua b
    temp=*pa;
    *pa=*pb;
    *pb=temp;
    cout<<"Gia tri cua a:"<<a<<endl;
    cout<<"Gia tri cua b:"<<b<<endl;
    cout<<"Dia chi cua con tro pa:"<<pa<<endl;
    pa++;
    cout<<"Gia tri cua con tro pa:"<<pa<<endl;
    return 0;
}