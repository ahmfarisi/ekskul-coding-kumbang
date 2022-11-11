#include<iostream>
using namespace std;

int main() {
	char jawaban;
	
	mulai:
		cout<<"Would you be mine? (Y/T) : "; cin>>jawaban;
		if(jawaban == 'Y'){
			cout<<endl;
			cout<<"Thankyou for being mine <3";
		}
		else{
			goto mulai;
		}
	
	return 0;
}
