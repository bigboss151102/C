#include<iostream>
using namespace std;

int main(){
    int *p; 
    p=new int; //Cap phat bo nho cho con tro
    *p=100; // Gan gia tri bang 100 tai o nho ma p dang tro ttoi
    cout<<"Dia chi tai con tro p="<<p<<endl;
    cout<<"Gia tri tai dia chi ma p dang tro toi:"<<*p<<endl;
    delete p;
    return 0;
}