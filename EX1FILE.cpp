#include<stdio.h>
#include<iostream>

using namespace std;
void LuuFile(int number);
int main()
{
    while (true)
    {
        int number;
        cout<<"Nhap so:";
        cin>>number;
        LuuFile(number);
        char h;
        cout<<"Nhap tiep khong ?";
        cin>>h;
        if(h =='k')
        {
            break;
        }
    }
    cout<<"Ban da nhap xong !";
    FILE *file=fopen("csdl1511", "r");
    while (true)
    {
        char *line="\0";
        char buffer=[5];
        line=fgets(buffer,5,file);
        if(line != NULL)
        {
            int number=atoi(line);
            cout<<number<<endl;
        }else
        {
            break;
        }
    }
    fclose(file);
    return 0;
    
}
void LuuFile(int number)
{
    FILE *file=fopen("csdl1511.txt","a");
    char str[5];
    itoa(number,str,10);//10->thap phan,16->hexa,8->octa
    fputs(str,file);
    fputs("\n",file);
    fclose(file);
}