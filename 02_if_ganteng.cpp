#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	string nama;
	
	cout<<"Tebak Kegantenganmu"<<endl;
	cout<<"==================="<<endl;
	
	cout<<"Nama Kamu : "; getline(cin, nama);
	
	if(nama == "Kamen Rider"){
		cout<<"ANDA GANTENG";
	}
	else if(nama == "Teza"){
		cout<<"ANDA LEBIH GANTENG";
	}
	else{
		cout<<"ANDA TIDAK DIKENAL";
	}
	
	_getch();
	return 0;
}
