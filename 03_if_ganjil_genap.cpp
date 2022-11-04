#include<iostream>
using namespace std;

int main(){	
	int angka;
	char ulang;
	
	cout<<"====================================="<<endl;
	cout<<"PROGRAM MENENTUKAN ANGKA GENAP/GANJIL"<<endl;
	cout<<"====================================="<<endl<<endl;
	
tanda_satu :
	
	cout<<"Masukkan Angka : "; cin>>angka;
	
	if(angka%2==0){
		cout<<"Angka Anda     : GENAP";
	}
	else{
		cout<<"Angka Anda     : GANJIL";
	}
	
	cout<<endl<<endl;
	cout<<"Ulangi? (Y/T)  : "; cin>>ulang;
	
	if(ulang == 'Y'){
		cout<<endl;
		goto tanda_satu;
	}
	
	return 0;
}
