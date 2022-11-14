#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>

using namespace std;

struct HocSinh{
	
	char ten[50];
	float diemMonToan;
	float diemMonVan;
	float diemTrungBinh;
	char hocLuc[10];
};

typedef HocSinh HS;
void xoaXuongDong(char x[]);
void nhaphocsinh(HS &hs);
void inhocsinh(HS hs);
void tinhDiemTrungBinh(HS *hs);
void xepLoai(HS &hs);
void capNhathocsinh(HS &hs);
void nhapDanhSachhocsinh(HS ds[], int &n);
void xuatDanhSachhocsinh(HS ds[], int n);
void sapXepDanhSachhocsinhTheoDTB(HS ds[], int n);

void xoaXuongDong(char x[]){
	size_t len = strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
}
void nhaphocsinh(HS &hs){
	cout<<"\nTen: "; 
    fflush(stdin); 
    gets(hs.ten);
	cout<<"\nDiem mon Toan: "; 
    cin>>hs.diemMonToan;
	cout<<"\nDiem mon Van: ";
    cin>>hs.diemMonVan;
}

void inhocsinh(HS hs){
	cout<<hs.ten<<"\t\t"<<hs.diemMonToan<<"\t\t"<< hs.diemMonVan<<"\t\t"<<hs.diemTrungBinh<<"\t\t"<<hs.hocLuc<<endl;
}

void tinhDiemTrungBinh(HS *hs){
	hs->diemTrungBinh = (hs->diemMonToan+hs->diemMonVan)/2;
}

void xepLoai(HS &hs){
	if(hs.diemTrungBinh >= 8){
		strcpy(hs.hocLuc, "Gioi");
	}else if(hs.diemTrungBinh >= 7){
		strcpy(hs.hocLuc, "Kha");
	}else if(hs.diemTrungBinh >= 5){
		strcpy(hs.hocLuc, "Trung Binh");
	}else{
		strcpy(hs.hocLuc, "Yeu");
	}
	
}

void capNhathocsinh(HS &hs){
	nhaphocsinh(hs);
	tinhDiemTrungBinh(&hs);
	xepLoai(hs);
}

void nhapDanhSachhocsinh(HS ds[], int &n){
	do{
        cout<<"Nhap vao so hoc sinh:";
		cin>>n;
	}while(n<=0);
	for(int i=0; i<n ; i++){
		cout<<"Nhap vao sinh vien thu "<<i<<":"<<endl;
		capNhathocsinh(ds[i]);
	}
}
void xuatDanhSachSinhVien(HS ds[], int n){
    cout<<"Ten"<<"\t\t"<<"Diem Toan"<<"\t"<< "Diem Van"<<"\t"<<"Diem TB"<<"\t\t"<< "XepLoai"<<endl;
	for(int i=0; i<n ; i++){
		inhocsinh(ds[i]);
	}
}

void xuatDanhSachSinhVienXepLoai(HS ds[], int n, char xepLoai[]){
	cout<<"\n Danh sach sinh vien xep loai gioi"<<endl;
	cout<< "Diem Toan"<<"\t"<< "Diem Van"<<"\t"<< "Diem TB"<<"\t"<<"XepLoai"<<endl;
	for(int i=0; i<n ; i++){
		if (strcmp(strupr(ds[i].hocLuc),strupr(xepLoai))==0){
			inhocsinh(ds[i]);
            cout<<endl;
		}
	}
}

void sapXepDanhSachSinhVienTheoDTB(HS ds[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(ds[i].diemTrungBinh<ds[j].diemTrungBinh){
				HS temp;
				temp = ds[i];
				ds[i] = ds[j];
				ds[j]=temp;
			}
		}
	}
}
void nhapPhimBatKy(){
		cout<<"\nNhap phim bat ky de tiep tuc!"<<endl;
        getch();
}
int main(){
	HS ds[100];
	int n;
	int chon;
	do{
		cout<<"MENU:"<<endl;
		cout<<"1- Nhap danh sach sinh vien"<<endl;
		cout<<"2- Xuat danh sach sinh vien"<<endl;
		cout<<"3- Sap xep sinh vien theo DTB"<<endl;
		cout<<"0- Thoat"<<endl;
		cin>>chon;
		
		switch(chon){
			case 1:
					nhapDanhSachhocsinh(ds, n); 
					nhapPhimBatKy();
					break;
			case 2:
					xuatDanhSachSinhVien(ds, n);
					nhapPhimBatKy();
					break;	
			/* case 3:
					char xepLoai[20];
					cout<<"Nhap xep loai can hien thi: ";
                    fflush(stdin); 
                    fgets(xepLoai, sizeof(xepLoai), stdin);
                    xoaXuongDong(xepLoai); 
					xuatDanhSachSinhVienXepLoai(ds, n, xepLoai);
					nhapPhimBatKy();
					break; */
					
			case 3:
					cout<<"Danh sach sau khi sap xep theo DTB:"<<endl;
					sapXepDanhSachSinhVienTheoDTB(ds,n);
					xuatDanhSachSinhVien(ds, n);
					nhapPhimBatKy();
					break;
		}
	} while(n!=0);
}



    
    


