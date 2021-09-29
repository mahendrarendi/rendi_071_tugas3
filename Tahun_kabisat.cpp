
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int tahun;
    char x;
    
    do{
    cout<<"Masukan Tahun : "; cin>>tahun;
    cout<<endl;
    if(tahun%4 == 0){
        cout<<"Tahun Kabisat"<<endl;
    }else {
        cout<<"Bukan Tahun Kabisat"<<endl;
    }
    cout<<" "<<endl;
    cout<<"Lagi ? [Y/T] : "; cin>>x;
    cout<<endl;
    } while (x == 'y' || x == 'Y');
    cout<<"exit! "<<endl;
    cout<<" "<<endl;
    cout<<"develop @mahendrarendi";
    
    return 0;
}
