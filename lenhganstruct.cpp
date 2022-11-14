#include<iostream>
#include<string.h>

using namespace std;
struct book
{
    char title[50];
    char author[50];
    int pages;
    float price;
};
int main()
{
    book b;
    cout<<"Nhap ten Sach:";
    gets(b.title);
    cout<<"Nhap ten tac gia:";
    gets(b.author);
    cout<<"Nhap so trang:";
    cin>>b.pages;
    cout<<"Nhap gia cua sach:";
    cin>>b.price;
    
    book a=b;
    cout<<"Nhap ten Sach:"<<a.title<<endl;
    cout<<"Nhap ten tac gia:"<<a.author<<endl;
    cout<<"Nhap so trang:"<<a.pages<<endl;
    cout<<"Nhap gia cua sach:"<<a.price<<endl;
    return 0;
}
