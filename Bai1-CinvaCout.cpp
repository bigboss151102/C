#include<iostream>
using namespace std;

int main(){
    double math,literature,average;
    cout<<"Please input math:";
    cin>>math;
    cout<<"Please input literature:";
    cin>>literature;
    average=(math*2+literature)/3;
    cout<<"average is:"<<average;
    return 0;
}