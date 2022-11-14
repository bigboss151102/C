#include<iostream>
#include<stdio.h>

using namespace std;
void GhiFile()
{
    FILE *f;
    f=fopen("csdl.txt","w");
    fputs("SV01; Hoang Cong Trong;15/11/2002\n",f);
    fputs("SV02; Giap Thanh Thong;15/11/2002\n",f);
    fputs("SV03; Tran Bao Quy;15/11/2002\n",f);
}
void DocFile()
{
    FILE *f;
    f=fopen("csdl.txt","r");
    char *s="\0";
    do
    {
        char line[255];
        s=fgets(line,255,f);
        if(s==NULL){
            break;
        }
        cout<<s<<endl;
    } while (true);
    fclose(f);
}
int main()
{
   DocFile();
   return 0;
}