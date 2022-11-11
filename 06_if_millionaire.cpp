#include<iostream>
using namespace std;

int main(){
	char jawaban;
	
	cout<<"============================="<<endl;
	cout<<"WHO WANTS TO BE A MILLIONAIRE"<<endl;
	cout<<"============================="<<endl<<endl;
	
	cout<<"Pertanyaan Pertama"<<endl;
	cout<<"------------------"<<endl;
	cout<<"Di Indonesia, 10 November dikenal sebagai hari ..."<<endl;
	cout<<"A. Hari Pahlawan    B. Hari Pendidikan Nasional   "<<endl;
	cout<<"C. Hari Buruh       D. Hari Kemerdekaan           "<<endl<<endl;
	cout<<"Jawaban (A/B/C/D) : ";cin>>jawaban;
	cout<<endl;
	
	if(jawaban != 'A'){
		cout<<"JAWABAN SALAH !";
		_exit(0);
	}
	
	cout<<"Pertanyaan Kedua"<<endl;
	cout<<"------------------"<<endl;
	cout<<"Di bawah ini yang merupakan Kota/Kabupaten di Provinsi"<<endl;
	cout<<"Sumatera Selatan, kecuali ..."<<endl;
	cout<<"A. Palembang        B. Lahat                      "<<endl;
	cout<<"C. Jambi            D. Pagaralam                  "<<endl<<endl;
	cout<<"Jawaban (A/B/C/D) : ";cin>>jawaban;
	cout<<endl;
	
	if(jawaban != 'C'){
		cout<<"JAWABAN SALAH !";
		_exit(0);
	}
	
	cout<<"Pertanyaan Ketiga"<<endl;
	cout<<"------------------"<<endl;
	cout<<"Yang merupakan petinju legendaris dunia di bawah ini adalah ..."<<endl;
	cout<<"A. Janvinlie        B. Vincent Junio              "<<endl;
	cout<<"C. Muhammad Afif    D. Mike Tyson                 "<<endl<<endl;
	cout<<"Jawaban (A/B/C/D) : ";cin>>jawaban;
	cout<<endl;
	
	if(jawaban != 'D'){
		cout<<"JAWABAN SALAH !";
		_exit(0);
	}
	
	return 0;
}
