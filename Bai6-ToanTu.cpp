#include<iostream>
using namespace std;

int main(){
    int x=5, y=3;
    int z=x-- - ++y + 2;
    //step 1: ++y=4
    //step2: 5 - 4 + 2 = 3
    //step3: x--=4
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    cout<<"z="<<z<<endl;
    int a=5, b=10;
    int c=++a - b-- +2;
    //step1: ++a=6
    //step2: 6 - 10 + 2 = -2
    //step3: b-- = 9
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;
    return 0;
}