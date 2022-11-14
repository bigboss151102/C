#include<iostream>
#include<string.h>

using namespace std;
int main()
{
     char *str= new char[255];
     cout<<"Moi thim nhap chuoi:";
     gets(str);
     int n=strlen(str);
     for(int i=0; i<n;i++)
     {
        char *c=(str+i);
        int acssi=(int)i;
        cout<<c<<"=>"<<acssi<<endl;
     }
     return 0;
}