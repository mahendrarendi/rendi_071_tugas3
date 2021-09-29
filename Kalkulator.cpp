
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int a, b, pilihan, hasil;
    string operasi;
    char x;
	
	//input
	cout<<"Program Kalkulator"<<endl;
	do{
	cout<<"Pilihan Operator Aritmatika "<<endl;
	cout<<"[1 = + ]"<<endl;
	cout<<"[2 = - ]"<<endl;
	cout<<"[3 = * ]"<<endl;
	cout<<"[4 = / ]"<<endl;
	cout<<"[5 = % ]"<<endl;

	cout<<"Pilih Operator Aritmatika = "; cin>>pilihan;
	cout<<"Masukan Bilangan A = "; cin>>a;
	cout<<"Masukan Bilangan B = "; cin>>b;
	cout<<endl;
	
	switch(pilihan){
		case 1 : hasil=a+b;
		operasi="+";
		break;
		
		case 2 : hasil=a-b;
		operasi="-";
		break;
		
		case 3 : hasil=a*b;
		operasi="*";
		break;
		
		case 4 : hasil=a/b;
		operasi="/";
		break;
		
		case 5 : hasil=a%b;
		operasi="%";
		break;
		
		default :
			cout<<"Operasi Aritmatika Salah"<<endl;
	}
	
	cout<<"Hasil ";
	cout<<a<< operasi <<b<<" = "<<hasil;
	cout<<" "<<endl;

    cout<<"\nLagi ? [Y/T] : "; cin>>x;
    cout<<endl;
    } while (x == 'y' || x == 'Y');
    cout<<"exit! "<<endl;
    cout<<" "<<endl;
    cout<<"develop @mahendrarendi";
    
    return 0;
}
