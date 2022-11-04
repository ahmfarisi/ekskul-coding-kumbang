#include<iostream>
#include<cstdlib>
using namespace std;

int main(){	
	int angka;
	int jawaban;
	int x;
	int y;
	
	cout<<"=============================="<<endl;
	cout<<"TEBAK ANGKA ANTARA x SAMPAI y"<<endl;
	cout<<"=============================="<<endl<<endl;
	
	cout<<"x = "; cin>>x;
	cout<<"y = "; cin>>y;
	
	jawaban = x + (rand() % y);
	cout<<endl;
	
	tanda_satu:
		
		cout<<"Masukkan angka tebakan kamu : "; cin>>angka;
		
		if(angka > jawaban){
			cout<<"Angka Kebesaran"<<endl<<endl;
			goto tanda_satu;
		}
		else if(angka < jawaban){
			cout<<"Angka Kekecilan"<<endl<<endl;
			goto tanda_satu;
		}
		else{
			cout<<"ANDA BENAR";
		}
	
	return 0;
}
