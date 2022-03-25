/*Anggota Kelompok
1. Aditya Prariyadi Wibowo (2100018433)
2. Ardiyan Rasendriya Prakoso (2100018434)*/

#include <iostream>
#include <cmath>
using namespace std;

void Penjumlahan();
void Perkalian();
void Pengurangan();
void Pembagian();
void Perpangkatan();

int main(){
	x :
	cout<<"================================================\n";
	cout<<"\t\tKalkulator Sederhana\n";
	cout<<"================================================\n";
	int pil;
	float num1,num2;
	char a;
	cout<<"Pilih Operator Aritmatika"<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Perkalian"<<endl;
	cout<<"3. Pengurangan"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"5. Perpangkatan"<<endl;
	cout<<"Input pilihan operator : ";
	cin>>pil;
	
	if(pil>=1 && pil<=5){
		cout<<endl;
		switch(pil){
			case 1:
				cout<<"Operator yang dipilih [+]"<<endl;
				Penjumlahan();
				break;
			case 2:
				cout<<"Operator yang dipilih [*]"<<endl;
				Perkalian();
				break;
			case 3:
				cout<<"Operator yang dipilih [-]"<<endl;
				Pengurangan();
				break;
			case 4:
				cout<<"Operator yang dipilih [/]"<<endl;
				Pembagian();
				break;
			case 5:
				cout<<"Operator yang dipilih [pangkat]"<<endl;
				Perpangkatan();
				break;
		}
	}else{
	cout<<"=======================================================================\n";
	cout<<"Terjadi kesalahan!! input data tidak ditemukan,silahkan ulangi kembali!"<<endl;
	cout<<"=======================================================================\n";	
	}
	cout<<"Lanjutkan perhitungan : [Y/T]";
	cin>>a;
		if(a == 'Y'){
			system("cls");
			goto x;
		}else if(a == 'T'){
			exit(0);
		}
	return 0;
}
void Penjumlahan(){
    float num1,num2;
    float hasil;
    cout <<"Input Angka Pertama : "; 
	cin >>num1;
    cout <<"Input Angka Kedua   : "; 
	cin >>num2;
    hasil = num1+num2;
    cout<<"================================================\n";
    cout<<" "<<num1<<" + "<<num2<<" = "<<hasil<<endl;
    cout<<"================================================\n";
}
 
void Perkalian(){
    float num1,num2;
    float hasil;
    cout <<"Input Angka Pertama : "; 
	cin >>num1;
    cout <<"Input Angka Kedua   : "; 
	cin >>num2;
    hasil = num1*num2;
    cout<<"================================================\n";
    cout<<" "<<num1<<" * "<<num2<<" = "<<hasil<<endl;
    cout<<"================================================\n";
}
 
void Pengurangan(){
    float num1,num2;
    float hasil;
    cout <<"Input Angka Pertama : "; 
	cin >>num1;
    cout <<"Input Angka Kedua   : "; 
	cin >>num2;
    hasil = num1-num2;
    cout<<"================================================\n";
    cout<<" "<<num1<<" - "<<num2<<" = "<<hasil<<endl;
    cout<<"================================================\n";
}
 
void Pembagian(){
    float num1,num2;
    float hasil;
    cout <<"Input Angka Pertama : "; 
	cin >>num1;
    cout <<"Input Angka Kedua   : "; 
	cin >>num2;
    hasil = num1/num2;
    cout<<"================================================\n";
    cout<<" "<<num1<<" / "<<num2<<" = "<<hasil<<endl;
    cout<<"================================================\n";
}
 
void Perpangkatan(){
    int num1,num2;
    float hasil = 0;
    cout <<"Input Angka   : "; 
	cin >>num1;
    cout <<"Input Pangkat : "; 
	cin >>num2;
	hasil = pow(num1,num2);
	cout<<"================================================\n";
    cout<<" "<<num1<<" pangkat "<<num2<<" = "<<hasil<<endl;
    cout<<"================================================\n";
}
