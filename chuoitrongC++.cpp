#include<iostream>
#include<string.h>

using namespace std;

int main(){

    
    // Hoc ham gets, puts 
    char str[25];
    cout<<"Moi ban nhap chuoi 1:";
    gets(str);// cin.getline(str,25)
    cout<<"Chuoi sau khi nhap la:"<<endl;
    puts(str);// cout<<str<<endl;

    char *str2=new char[25];
    cout<<"Moi ban nhap chuoi 2:";
    gets(str2);
    puts(str2);



    // Hoc ham cin.hetline, cout
    char str3[30];
    cout<<"Moi ban nhap chuoi 3:";
    cin.getline(str3,30);
    cout<<"Chuoi sau khi nhap la:"<<endl;
    cout<<str3<<endl;


    //Hoc ham strcpy. strncpy
    char str4[50], str5[5];
    cout<<"Moi ban nhap chuoi 4:";
    gets(str4);
    strcpy(str5,str4);
    cout<<"Chuoi 5 la:"<<str5<<endl;
    char str6[50];
    strncpy(str6,str,6);


    // Hoc ham strcat, strncat
    char str7[25], str8[25];
    strcpy(str7,"Obama");
    strcpy(str8,"KimJongUn");
    strcat(str7,str8);
    cout<<str7<<endl;
    char ho[25],ten[25],hovaten[50];
    strcpy(hovaten,"");
    cout<<"Nhap ho:";
    gets(ho);
    strcat(hovaten,ho);
    strcat(hovaten,"");
    cout<<"Nhap ten:";
    gets(ten);
    strcat(hovaten,ten);
    cout<<hovaten<<endl;



    // Hoc ham strchr, strstr
    char str9[25];
    strcpy(str9,"hellocobomo");
    char *p=strrchr(str9,'l');
    if(p == NULL)
    {
        cout<<"Khong tim thay:"<<endl;
    }else{
        cout<<"Tim thay \"l\" tai vi tri "<<p-str9<<endl;
    }
    char str10[250];
    strcpy(str10,"Trong yeu Kim Yen nhieu lam a !");
    char *p1=strstr(str10,"Kim Yen");
    if(p1 == NULL)
    {
        cout<<"Khong tim thay \"Kim Yen\""<<endl;
    }else{
        cout<<"Tim thay \"Kim Yen\" tai vi tri "<<p1-str10<<endl;
    }

    //Học hàm toupper và tolower
    char str11[]="HOANG cong TrOnG";
    int n1=strlen(str11);
    for(int i=0;i<n1;i++)
    {
        char c=str11[i];
        putchar(toupper(c));
    }
    char str12[]="CHUC MUNG NAM MOI ";
    int n2=strlen(str12);
    for(int i=0;i<n2;i++)
    {
        char c1=str12[i];
        putchar(tolower(c1));
    }
    return 0;
}