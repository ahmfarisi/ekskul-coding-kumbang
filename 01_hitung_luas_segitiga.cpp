#include<iostream>
using namespace std;

int main(){
	int a,t;
	float L;
	
	cout<<"============================"<<endl;
	cout<<"Program Hitung Luas Segitiga"<<endl;
	cout<<"============================"<<endl<<endl;
	
	cout<<"Alas   : "; cin>>a;
	cout<<"Tinggi : "; cin>>t;
	
	L = (float) a*t/2;
	
	cout<<"Luas   : "<<L;
	
	return 0;
}
