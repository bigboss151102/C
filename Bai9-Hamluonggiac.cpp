#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int x;//Goc nhap vao tu ban phim
    double radian;
    const double PI=3.14;
    cout<<"Moi ban nhap mot goc:";
    cin>>x;
    radian=(x*PI)/180;
    double sinx=sin(radian);
    double cosx=cos(radian);
    double tanx=tan(radian);
    double cotan=1/tan(radian);
    cout<<"sin("<<x<<")="<<sinx<<endl;
    cout<<"cos("<<x<<")="<<cosx<<endl;
    cout<<"tan("<<x<<")="<<tanx<<endl;
    cout<<"cotan("<<x<<")="<<cotan<<endl;
    return 0;
}