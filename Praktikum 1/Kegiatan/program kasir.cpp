#include <iostream>
using namespace std;

int main(){	
	int goreng=17000 ,bakar=21000;
	int menu, jumlah,b,diskon,total;

	cout<<"\tDaftar Menu"<<endl;
	cout<<"======================================\n";
	cout<<"1. Ayam goreng (Rp 17.000)"<<endl;
	cout<<"2. Ayam bakar  (Rp 21.000)"<<endl;
	cout<<"======================================\n";
	cout<<"Pilih Menu : ";
	cin>>menu;
	
	if (menu==1){
		cout<<"Jumlah yang dibeli : "; 
		cin>>b;
		jumlah = goreng*b;
		cout<<"======================================\n";
		cout<<"Total Bayar Rp."<<jumlah<<endl;
		cout<<"======================================\n";
	}else{
		cout<<"Jumlah yang dibeli : "; 
		cin>>b;
		jumlah = bakar*b;
		cout<<"\n======================================\n";
		cout<<"Total Bayar Rp."<<jumlah<<endl;
		cout<<"======================================\n";
	}
	
	if(jumlah>45000){
		diskon= 0.1*jumlah;
		cout<<"======================================\n";
		cout<<"Diskon 10% :Rp "<<diskon<<endl;
		total=jumlah-diskon;
		cout<<"Total :Rp "<<total<<endl;
		cout<<"======================================\n";
	}
	
	return 0;
}
